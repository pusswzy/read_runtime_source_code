//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#include <array>
#include <vector>
#include <utility>

#import "Starboard.h"

#import "GenericPasswordItemHandler.h"

#import <CoreFoundation/CoreFoundation.h>
#import <Security/SecItem.h>
#import <ErrorHandling.h>
#import "CppWinRTHelpers.h"

#import <Foundation/NSData.h>
#import <Foundation/NSString.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSUUID.h>
#import <Foundation/NSMutableArray.h>
#import <Foundation/NSMutableDictionary.h>

#include <COMIncludes.h>
#include <wrl\client.h>
#include <wrl\wrappers\corewrappers.h>
#include <windows.foundation.collections.h>
#include <COMIncludes_End.h>

using namespace ABI::Windows::Foundation::Collections;
using namespace Microsoft::WRL;
using namespace Windows::Foundation;
using namespace winrt::Windows::Security::Credentials;
namespace WFC = winrt::Windows::Foundation::Collections;

// The password property on PasswordCredential is not valid unless you have
// previously called retrievePassword (or set it locally). Since PasswordCredential is an
// auto-generated class, this can't be fixed at the source to make the interface
// less error-prone. Instead, wrap the object so that a more sane interface can be used.
@interface PasswordCredentialWrapper : NSObject
- (instancetype)init;
- (instancetype)initWithCredential:(const PasswordCredential&)credential;
@property (retain) NSString* userName;
@property (retain) NSString* resource;
@property (retain) NSString* password;
- (PasswordCredential)credential;
@end

@implementation PasswordCredentialWrapper {
    TrivialDefaultConstructor<PasswordCredential> _credential;
    bool _shouldRetrievePassword;
    bool _passwordSet;
}

- (instancetype)init {
    if (self = [super init]) {
        // This is a brand new Credential. Don't try to retrieve the password from the
        // backing store. The API itself is "finicky" and will complain if its never been set
        // before.
        _shouldRetrievePassword = false;
        _passwordSet = false;
        _credential = PasswordCredential();
    }

    return self;
}

- (instancetype)initWithCredential:(const PasswordCredential&)credential {
    if (self = [super init]) {
        // This is an existing Credential. To get one of these, the assumption is that
        // password was set when it was added to the vault. It *should* be safe to retrive the password.
        _shouldRetrievePassword = true;
        _passwordSet = false;
        _credential = credential;
    }

    return self;
}

- (PasswordCredential)credential {
    return _credential;
}

- (NSString*)userName {
    return objcwinrt::string(_credential.UserName());
}

- (NSString*)resource {
    return objcwinrt::string(_credential.Resource());
}

- (NSString*)password {
    if (_passwordSet) {
        return objcwinrt::string(_credential.Password());
    } else {
        if (_shouldRetrievePassword) {
            _credential.RetrievePassword();
            return objcwinrt::string(_credential.Password());
        } else {
            return nil;
        }
    }
}

- (void)setUserName:(NSString*)value {
    _credential.UserName(objcwinrt::string(value));
}

- (void)setResource:(NSString*)value {
    _credential.Resource(objcwinrt::string(value));
}

- (void)setPassword:(NSString*)value {
    _passwordSet = true;
    _credential.Password(objcwinrt::string(value));
}

@end

// Handler lambda to set a property on the backing WinRT credential object
using GenericPasswordPropertySetter = void (*)(NSString* keyName, id value, PasswordCredentialWrapper* credential);

// Handler lambda to get a property from the backing WinRT credential object
using GenericPasswordPropertyGetter = id (*)(NSString* keyName, PasswordCredentialWrapper* credential);

// Handler lambda to compare a property to the backing WinRT credential object
using GenericPasswordPropertyComparator = bool (*)(NSString* keyName,
                                                   id value,
                                                   PasswordCredentialWrapper* credential,
                                                   bool caseInsensitive);

static const NSString* kPersistentRefKey = @"k_PersistentRef";

// special value to represent null / empty strings since the WinRT APIs don't accept nulls/emptys and
// username, password, and resource *must* be filled out on all creds.
static NSString* c_sentinelNullString = @" ";

// Handler struct to easily allow property dictionaries
// to be set, get, and compared against the WinRT equivalent
struct GenericPasswordPropertyHandler {
    GenericPasswordPropertySetter setter;
    GenericPasswordPropertyGetter getter;
    GenericPasswordPropertyComparator comparator;
};

// Only allow class key comparisons that match GenericPassword
bool ClassComparator(NSString* keyName, id value, PasswordCredentialWrapper*, bool) {
    return [static_cast<NSString*>(kSecClassGenericPassword) isEqualToString:value];
};

// Only return class type as GenericPassword
id ClassGetter(NSString*, PasswordCredentialWrapper* credential) {
    return static_cast<NSString*>(kSecClassGenericPassword);
};

// Setter for kSecIsNegative Property Key. This key is indicates that the credential does not
// actually store any password data. The winRT surface doesn't allow this so store an empty password instead.
void IsNegativeSetter(NSString* keyName, id value, PasswordCredentialWrapper* credential) {
    // According to documentation, the corresponding value is of type CFBooleanRef
    // and indicates whether there is a valid password associated with this keychain item.
    // This means a true indicates there is a password (normal). I think. Maybe.
    if (!CFBooleanGetValue(static_cast<CFBooleanRef>(value))) {
        credential.password = c_sentinelNullString;
    }

    // TODO: Also store it for later so that queries with it are correct.
};

// Sets the userName field based on kSecAccountName key
void AccountSetter(NSString* keyName, id value, PasswordCredentialWrapper* credential) {
    NSString* stringValue = static_cast<NSString*>(value);

    // Note that in WinRT "" is == nullptr for HSTRING. so
    // add an additional check that we aren't using an empty NSString.
    if (![stringValue isEqualToString:@""]) {
        credential.userName = stringValue;
    }
};

// Gets the userName field
id AccountGetter(NSString*, PasswordCredentialWrapper* credential) {
    NSString* stringValue = credential.userName;
    return [stringValue isEqualToString:c_sentinelNullString] ? nil : stringValue;
};

// Compares the AccountName to the credential's username.
bool AccountComparator(NSString* keyName, id value, PasswordCredentialWrapper* credential, bool caseInsensitive) {
    NSString* account = AccountGetter(nil, credential);

    if (caseInsensitive && [value isKindOfClass:[NSString class]]) {
        return [account.lowercaseString isEqualToString:static_cast<NSString*>(value).lowercaseString];
    } else {
        return [account isEqual:value];
    }
};

// Sets the password field on the backing WinRT credential
void PasswordSetter(NSString* keyName, id value, PasswordCredentialWrapper* credential) {
    NSString* stringValue = [static_cast<NSData*>(value) base64EncodedStringWithOptions:0];

    if ((stringValue != nil) && (![stringValue isEqualToString:@""])) {
        credential.password = stringValue;
    }
};

// Compares the password on the backing WinRT credential. It might seem weird to allow passwords to be
// compared but note that the CredVault has no secret information. All passwords are freely accessible by the app
// already so no security concern exists for this.
bool PasswordComparator(NSString* keyName, id value, PasswordCredentialWrapper* credential, bool) {
    NSString* password = credential.password;
    password = [password isEqualToString:c_sentinelNullString] ? nil : password;

    return [password isEqual:[static_cast<NSData*>(value) base64EncodedStringWithOptions:0]];
};

// Sets the resource on the backing credential
void ServiceSetter(NSString* keyName, id value, PasswordCredentialWrapper* credential) {
    NSString* stringValue = static_cast<NSString*>(value);

    // Note that in WinRT "" is == nullptr for HSTRING. so
    // add an additional check that we arent using an empty NSString.
    if (![stringValue isEqualToString:@""]) {
        credential.resource = stringValue;
    }
};

// Gets the resource on the backing credential
id ServiceGetter(NSString*, PasswordCredentialWrapper* credential) {
    NSString* stringValue = credential.resource;
    return [stringValue isEqualToString:c_sentinelNullString] ? nil : stringValue;
};

// Compares the Service to the backing WinRT resource
bool ServiceComparator(NSString* keyName, id value, PasswordCredentialWrapper* credential, bool caseInsensitive) {
    NSString* service = ServiceGetter(nil, credential);

    if (caseInsensitive && [value isKindOfClass:[NSString class]]) {
        return [service.lowercaseString isEqualToString:static_cast<NSString*>(value).lowercaseString];
    } else {
        return [service isEqual:value];
    }
};

// Used to compare if a backing WinRT credential is a member of he allowed search list.
bool ItemListComparator(NSString* keyName, id value, PasswordCredentialWrapper* credential, bool) {
    // TODO: once persistent refs are implemented, look through the id list to see if current cred is
    // a matching one. Since persistent refs can't be stored right now, any lookup needs to fail.
    return false;
};

// Gets a static property handler table that is used to set,get,or compare a property from a passed in dictionary
// to the backing WinRT credential.
std::array<std::pair<NSString*, GenericPasswordPropertyHandler>, 31>& GetPropertyHandlers() {
    // clang-format really wants to fold array entries weirdly (hard to read) so force it to be pretty here.
    // clang-format off
    // TODO: Add in Default handlers for most things once WinRT apis support property bag storage.
    static std::array<std::pair<NSString*, GenericPasswordPropertyHandler>, 31> s_propertyHandlers { {
        // Key                                                Setter            Getter         Comparator
        { static_cast<NSString*>(kSecAttrAccessible),       { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrAccessGroup),      { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrDescription),      { nullptr,          nullptr,       nullptr } }, 
        { static_cast<NSString*>(kSecAttrComment),          { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrCreator),          { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrType),             { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrLabel),            { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrIsInvisible),      { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrGeneric),          { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrCreationDate),     { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrModificationDate), { nullptr,          nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrIsNegative),       { IsNegativeSetter, nullptr,       nullptr } },
        { static_cast<NSString*>(kSecAttrAccount),          { AccountSetter,    AccountGetter, AccountComparator } },
        { static_cast<NSString*>(kSecAttrService),          { ServiceSetter,    ServiceGetter, ServiceComparator } },
        { static_cast<NSString*>(kSecValueData),            { PasswordSetter,   nullptr,       PasswordComparator } },
        { static_cast<NSString*>(kSecClass),                { nullptr,          ClassGetter,   ClassComparator } },

        // Extra items that could be in the dictionary but don't influence what gets set / matched / etc.
        { static_cast<NSString*>(kSecReturnData),                 { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecReturnAttributes),           { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecReturnRef),                  { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecReturnPersistentRef),        { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecUseItemList),                { nullptr, nullptr, ItemListComparator} },
        { static_cast<NSString*>(kSecMatchPolicy),                { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchItemList),              { nullptr, nullptr, ItemListComparator} },
        { static_cast<NSString*>(kSecMatchSearchList),            { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchIssuers),               { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchEmailAddressIfPresent), { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchSubjectContains),       { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchCaseInsensitive),       { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchTrustedOnly),           { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchValidOnDate),           { nullptr, nullptr, nullptr} },
        { static_cast<NSString*>(kSecMatchLimit),                 { nullptr, nullptr, nullptr} },
    } };
    // clang-format on

    return s_propertyHandlers;
};

// Used to Query the set of backing WinRT credentials to find all (or only the first) that match the passed in QueryDictionary.
std::vector<StrongId<PasswordCredentialWrapper>> FindMatchingCredentials(NSDictionary* queryDictionary,
                                                                         const WFC::IVectorView<PasswordCredential>& credArray,
                                                                         bool defaultFindAll) {
    // First figure out if the query should match only the first or all credentials. Different operations have different defaults
    // specified by defaultFindAll but can be overriden using the kSecMatchLimit key.
    bool findAll = defaultFindAll;

    id matchLimit = [queryDictionary objectForKey:static_cast<NSString*>(kSecMatchLimit)];
    if (matchLimit) {
        findAll = [matchLimit isEqualToString:static_cast<NSString*>(kSecMatchLimitAll)];
    }

    // Figure out if any string comparisons should be done as case insensitive.
    bool caseInsensitive =
        CFBooleanGetValue(static_cast<CFBooleanRef>([queryDictionary objectForKey:static_cast<NSString*>(kSecMatchCaseInsensitive)]));

    NSArray* keys = [queryDictionary allKeys];

    // The below looks *really* inefficient. It is important to note, however, that the
    // vault stores at most 20 credentials and that the property handler is a fixed (relatively small size).
    // This means that the complexity is actually closer to O(n) where n is the number of properties in the query dictionary.
    std::vector<StrongId<PasswordCredentialWrapper>> validCredentials;
    for (const PasswordCredential& credential : credArray) {
        // Need to check that a given cred is matching by matching all of the properties
        // in the queryDictionary against it.
        bool validCredential = true;

        StrongId<PasswordCredentialWrapper> wrapper;
        wrapper.attach([[PasswordCredentialWrapper alloc] initWithCredential:credential]);

        // loop through all the properties in the query dictionary to check for validity.
        // any prop in the query dictionary that isn't in the list is not a property that
        // we can match. The handlers include rows for all of the search modfiers and result shapers
        // so any missing property invalidates that credential.
        for (id key in keys) {
            bool foundProperty = false;
            for (const auto& entry : GetPropertyHandlers()) {
                if ([entry.first isEqualToString:key]) {
                    if (entry.second.comparator) {
                        validCredential =
                            validCredential &&
                            entry.second.comparator(entry.first, [queryDictionary objectForKey:key], wrapper, caseInsensitive);
                    }

                    foundProperty = true;
                    break;
                }
            }

            validCredential = validCredential && foundProperty;

            if (!validCredential) {
                break;
            }
        }

        if (validCredential) {
            validCredentials.emplace_back(std::move(wrapper));

            if (!findAll) {
                break;
            }
        }
    }

    return validCredentials;
}

// Maps a WinRT credential to the desired output type. This output type is determined from the input dictionary with kSecReturn*
// keys. This could be a dictionary of attributes, a data array for passwords, or a data array for a persistent ref. If more than one
// is requested, a dictionary of all the requested ones is returned.
id ShapeResultForCredential(PasswordCredentialWrapper* credential, bool returnAttributes, bool returnData, bool returnPersistentRef) {
    NSMutableDictionary* attributesDictionary = nil;
    NSData* data = nil;
    NSData* persistentRef = nil;

    if (returnAttributes) {
        attributesDictionary = [[NSMutableDictionary new] autorelease];

        for (const auto& entry : GetPropertyHandlers()) {
            if (entry.second.getter) {
                id value = entry.second.getter(entry.first, credential);
                if (value != nil) {
                    // Semantically there is no way to differentiate a non set attribute
                    // and one explicitly set to nil (we have no place to store an "isSet" bit or similar).
                    // Err on the side of caution and only return attributes that are explicitly set.
                    [attributesDictionary setObject:value forKey:entry.first];
                }
            }
        }
    }

    if (returnData) {
        NSString* password = [credential password];
        if ((password != nil) && (![password isEqualToString:c_sentinelNullString])) {
            data = [[[NSData alloc] initWithBase64EncodedString:password options:0] autorelease];
        }
    }

    if ((returnAttributes && (returnData || returnPersistentRef)) || (returnData && (returnAttributes || returnPersistentRef)) ||
        (returnPersistentRef && (returnData || returnAttributes))) {
        // multiple return types. Put them all in a dictionary.
        NSMutableDictionary* returnDictionary = [[NSMutableDictionary new] autorelease];

        if (returnAttributes) {
            [returnDictionary setObject:attributesDictionary forKey:static_cast<NSString*>(kSecReturnAttributes)];
        }

        if (returnPersistentRef) {
            // TODO: Handle persistent refs when WinRT supoprts it.
        }

        if (returnData) {
            [returnDictionary setObject:data forKey:static_cast<NSString*>(kSecReturnData)];
        }

        return returnDictionary;

    } else {
        if (returnAttributes) {
            return attributesDictionary;
        }

        if (returnPersistentRef) {
            return persistentRef;
        }

        if (returnData) {
            return data;
        }
    }

    return nil;
}

@implementation GenericPasswordItemHandler {
    TrivialDefaultConstructor<PasswordVault> _vault;
}

- (instancetype)init {
    return [self initWithVault:PasswordVault()];
}

- (instancetype)initWithVault:(const PasswordVault&)vault {
    if (self = [super init]) {
        _vault = vault;
    }
    return self;
}

- (OSStatus)add:(NSDictionary*)attributes withResult:(id*)result {
    StrongId<PasswordCredentialWrapper> credential;
    credential.attach([PasswordCredentialWrapper new]);

    for (const auto& entry : GetPropertyHandlers()) {
        id value = [attributes objectForKey:entry.first];
        if (value != nil) {
            if (entry.second.setter) {
                entry.second.setter(entry.first, value, credential);
            }
        }
    }

    // WinRT is "finicky" and doesn't like Credentials that don't have a username, password, AND resource.
    // to handle this, go ahead and set them to " " if they aren't already set.
    // NOTE that only nil is checked for here because the setters above will not set the value if it is "",
    // nil, or missing from the attribute dictionary all together. This allows us to perform one simple check
    // to handle all those cases.
    if ([credential resource] == nil) {
        [credential setResource:c_sentinelNullString];
    }

    if ([credential userName] == nil) {
        [credential setUserName:c_sentinelNullString];
    }

    if ([credential password] == nil) {
        [credential setPassword:c_sentinelNullString];
    }

    // TODO: Handle Creation time , Modification time, and persistent refs when WinRT APIs allow for it.
    try {
        _vault.Add([credential credential]);
    } catch (const winrt::hresult_error& e) {
        // Add is guaranteed to throw if you try to store more than ten credentials per app
        if (e.code() == E_INVALIDARG) {
            return errSecParam;
        }

        return errSecInteractionNotAllowed;
    }

    bool returnAttributes =
        CFBooleanGetValue(static_cast<CFBooleanRef>([attributes objectForKey:static_cast<NSString*>(kSecReturnAttributes)]));

    bool returnPersistentRef =
        CFBooleanGetValue(static_cast<CFBooleanRef>([attributes objectForKey:static_cast<NSString*>(kSecReturnPersistentRef)]));

    bool returnData = CFBooleanGetValue(static_cast<CFBooleanRef>([attributes objectForKey:static_cast<NSString*>(kSecReturnData)]));

    if (result && (returnAttributes || returnPersistentRef || returnData)) {
        *result = [ShapeResultForCredential(credential, returnAttributes, returnData, returnPersistentRef) retain];
    }

    return errSecSuccess;
}

- (OSStatus)update:(NSDictionary*)queryDictionary
    withAttributes:(NSDictionary*)attributesToUpdate
 attributesUpdated:(NSUInteger*)attributesUpdated {
    *attributesUpdated = 0;

    if (nil == queryDictionary) {
        return errSecParam;
    }

    WFC::IVectorView<PasswordCredential> credArray = _vault.RetrieveAll();

    // Documentation doesn't mention it but I have to assume update will update all matching rows.
    // Would be very difficult to use otherwise.
    std::vector<StrongId<PasswordCredentialWrapper>> credentialsToUpdate = FindMatchingCredentials(queryDictionary, credArray, true);

    // To "update" a credential, remove it, and then add a new one with all the same attributes (+ updated ones)
    for (const auto& credential : credentialsToUpdate) {
        _vault.Remove([credential credential]);

        // Try to just set the new info and add it back.
        for (const auto& entry : GetPropertyHandlers()) {
            id value = [attributesToUpdate objectForKey:entry.first];
            if (value != nil) {
                if (entry.second.setter) {
                    entry.second.setter(entry.first, value, credential);
                }
            }
        }

        // TODO: Handle  Modification time when WinRT APIs allow for it.
        _vault.Add([credential credential]);
    }

    *attributesUpdated = credentialsToUpdate.size();
    return errSecSuccess;
}

- (OSStatus)remove:(NSDictionary*)queryDictionary {
    if (nil == queryDictionary) {
        return errSecParam;
    }

    WFC::IVectorView<PasswordCredential> credArray = _vault.RetrieveAll();

    // Documentation for remove states that it by default removes all matching rows while documentation
    // for query defaults to a single item. Go figure.
    std::vector<StrongId<PasswordCredentialWrapper>> credentialsToRemove = FindMatchingCredentials(queryDictionary, credArray, true);

    for (const auto& credential : credentialsToRemove) {
        _vault.Remove([credential credential]);
    }

    return errSecSuccess;
}

- (OSStatus)query:(NSDictionary*)queryDictionary withResult:(id*)result {
    // To query for items, first retrieve all the stored items.
    // Next, iterate through them and add any items that match to the
    // result. An item is determined to match if all query dictionary
    // entries are determined to match.

    if (nil == queryDictionary) {
        return errSecParam;
    }

    bool returnAttributes =
        CFBooleanGetValue(static_cast<CFBooleanRef>([queryDictionary objectForKey:static_cast<NSString*>(kSecReturnAttributes)]));

    bool returnPersistentRef =
        CFBooleanGetValue(static_cast<CFBooleanRef>([queryDictionary objectForKey:static_cast<NSString*>(kSecReturnPersistentRef)]));

    bool returnData = CFBooleanGetValue(static_cast<CFBooleanRef>([queryDictionary objectForKey:static_cast<NSString*>(kSecReturnData)]));

    if ((result == nullptr) || (!returnAttributes && !returnPersistentRef && !returnData)) {
        // No results requested so no way to inform caller what matches. Just say ok.
        return errSecSuccess;
    }

    WFC::IVectorView<PasswordCredential> credArray = _vault.RetrieveAll();
    bool findAll =
        [[queryDictionary objectForKey:static_cast<NSString*>(kSecMatchLimit)] isEqualToString:static_cast<NSString*>(kSecMatchLimitAll)];

    // Documentation defaults to a single item.
    std::vector<StrongId<PasswordCredentialWrapper>> validCredentials = FindMatchingCredentials(queryDictionary, credArray, false);

    if (validCredentials.size() == 0) {
        return errSecItemNotFound;
    }

    // Shape the resulting credential list into an appropriate return type based on requested returns.
    if (findAll) {
        NSMutableArray* returnArray = [NSMutableArray arrayWithCapacity:validCredentials.size()];
        for (const auto& credential : validCredentials) {
            [returnArray addObject:ShapeResultForCredential(credential, returnAttributes, returnData, returnPersistentRef)];
        }

        *result = [returnArray retain];
    } else {
        *result = [ShapeResultForCredential(validCredentials[0], returnAttributes, returnData, returnPersistentRef) retain];
    }
    return errSecSuccess;
}
@end

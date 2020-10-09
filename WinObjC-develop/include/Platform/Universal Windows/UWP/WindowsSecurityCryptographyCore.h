//******************************************************************************
//
// Copyright (c) Microsoft. All rights reserved.
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

// WindowsSecurityCryptographyCore.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
#define OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsSecurityCryptographyCore.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSCCKeyDerivationParameters, WSCCCryptographicKey, WSCCCryptographicHash, WSCCPersistedKeyProvider, WSCCEncryptedAndAuthenticatedData, WSCCCryptographicEngine, WSCCHashAlgorithmProvider, WSCCMacAlgorithmProvider, WSCCKeyDerivationAlgorithmProvider, WSCCSymmetricKeyAlgorithmProvider, WSCCAsymmetricKeyAlgorithmProvider, WSCCHashAlgorithmNames, WSCCMacAlgorithmNames, WSCCSymmetricAlgorithmNames, WSCCAsymmetricAlgorithmNames, WSCCEccCurveNames, WSCCKeyDerivationAlgorithmNames;
@protocol WSCCIKeyDerivationParameters, WSCCIKeyDerivationParameters2, WSCCIKeyDerivationParametersStatics, WSCCIKeyDerivationParametersStatics2, WSCCICryptographicKey, WSCCIHashComputation, WSCCIHashAlgorithmProvider, WSCCIMacAlgorithmProvider, WSCCIMacAlgorithmProvider2, WSCCIKeyDerivationAlgorithmProvider, WSCCISymmetricKeyAlgorithmProvider, WSCCIAsymmetricKeyAlgorithmProvider, WSCCIAsymmetricKeyAlgorithmProvider2, WSCCIPersistedKeyProviderStatics, WSCCIEncryptedAndAuthenticatedData, WSCCICryptographicEngineStatics, WSCCICryptographicEngineStatics2, WSCCIHashAlgorithmProviderStatics, WSCCIMacAlgorithmProviderStatics, WSCCIKeyDerivationAlgorithmProviderStatics, WSCCISymmetricKeyAlgorithmProviderStatics, WSCCIAsymmetricKeyAlgorithmProviderStatics, WSCCIHashAlgorithmNamesStatics, WSCCIMacAlgorithmNamesStatics, WSCCISymmetricAlgorithmNamesStatics, WSCCIAsymmetricAlgorithmNamesStatics, WSCCIAsymmetricAlgorithmNamesStatics2, WSCCIEccCurveNamesStatics, WSCCIKeyDerivationAlgorithmNamesStatics, WSCCIKeyDerivationAlgorithmNamesStatics2;

// Windows.Security.Cryptography.Core.CryptographicPrivateKeyBlobType
enum _WSCCCryptographicPrivateKeyBlobType {
    WSCCCryptographicPrivateKeyBlobTypePkcs8RawPrivateKeyInfo = 0,
    WSCCCryptographicPrivateKeyBlobTypePkcs1RsaPrivateKey = 1,
    WSCCCryptographicPrivateKeyBlobTypeBCryptPrivateKey = 2,
    WSCCCryptographicPrivateKeyBlobTypeCapi1PrivateKey = 3,
    WSCCCryptographicPrivateKeyBlobTypeBCryptEccFullPrivateKey = 4,
};
typedef unsigned WSCCCryptographicPrivateKeyBlobType;

// Windows.Security.Cryptography.Core.CryptographicPublicKeyBlobType
enum _WSCCCryptographicPublicKeyBlobType {
    WSCCCryptographicPublicKeyBlobTypeX509SubjectPublicKeyInfo = 0,
    WSCCCryptographicPublicKeyBlobTypePkcs1RsaPublicKey = 1,
    WSCCCryptographicPublicKeyBlobTypeBCryptPublicKey = 2,
    WSCCCryptographicPublicKeyBlobTypeCapi1PublicKey = 3,
    WSCCCryptographicPublicKeyBlobTypeBCryptEccFullPublicKey = 4,
};
typedef unsigned WSCCCryptographicPublicKeyBlobType;

// Windows.Security.Cryptography.Core.Capi1KdfTargetAlgorithm
enum _WSCCCapi1KdfTargetAlgorithm {
    WSCCCapi1KdfTargetAlgorithmNotAes = 0,
    WSCCCapi1KdfTargetAlgorithmAes = 1,
};
typedef unsigned WSCCCapi1KdfTargetAlgorithm;

// Windows.Security.Cryptography.Core.CryptographicPadding
enum _WSCCCryptographicPadding {
    WSCCCryptographicPaddingNone = 0,
    WSCCCryptographicPaddingRsaOaep = 1,
    WSCCCryptographicPaddingRsaPkcs1V15 = 2,
    WSCCCryptographicPaddingRsaPss = 3,
};
typedef unsigned WSCCCryptographicPadding;

#include "WindowsStorageStreams.h"
#include "WindowsSecurityCryptographyCertificates.h"

#import <Foundation/Foundation.h>

// Windows.Security.Cryptography.Core.KeyDerivationParameters
#ifndef __WSCCKeyDerivationParameters_DEFINED__
#define __WSCCKeyDerivationParameters_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCKeyDerivationParameters : RTObject
+ (WSCCKeyDerivationParameters*)buildForCapi1Kdf:(WSCCCapi1KdfTargetAlgorithm)capi1KdfTargetAlgorithm;
+ (WSCCKeyDerivationParameters*)buildForPbkdf2:(RTObject<WSSIBuffer>*)pbkdf2Salt iterationCount:(unsigned int)iterationCount;
+ (WSCCKeyDerivationParameters*)buildForSP800108:(RTObject<WSSIBuffer>*)label context:(RTObject<WSSIBuffer>*)context;
+ (WSCCKeyDerivationParameters*)buildForSP80056a:(RTObject<WSSIBuffer>*)algorithmId partyUInfo:(RTObject<WSSIBuffer>*)partyUInfo partyVInfo:(RTObject<WSSIBuffer>*)partyVInfo suppPubInfo:(RTObject<WSSIBuffer>*)suppPubInfo suppPrivInfo:(RTObject<WSSIBuffer>*)suppPrivInfo;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject<WSSIBuffer>* kdfGenericBinary;
@property (readonly) unsigned int iterationCount;
@property WSCCCapi1KdfTargetAlgorithm capi1KdfTargetAlgorithm;
@end

#endif // __WSCCKeyDerivationParameters_DEFINED__

// Windows.Security.Cryptography.Core.CryptographicKey
#ifndef __WSCCCryptographicKey_DEFINED__
#define __WSCCCryptographicKey_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCCryptographicKey : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int keySize;
- (RTObject<WSSIBuffer>*)exportDefaultPrivateKeyBlobType;
- (RTObject<WSSIBuffer>*)exportPrivateKeyWithBlobType:(WSCCCryptographicPrivateKeyBlobType)BlobType;
- (RTObject<WSSIBuffer>*)exportDefaultPublicKeyBlobType;
- (RTObject<WSSIBuffer>*)exportPublicKeyWithBlobType:(WSCCCryptographicPublicKeyBlobType)BlobType;
@end

#endif // __WSCCCryptographicKey_DEFINED__

// Windows.Security.Cryptography.Core.CryptographicHash
#ifndef __WSCCCryptographicHash_DEFINED__
#define __WSCCCryptographicHash_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCCryptographicHash : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)append:(RTObject<WSSIBuffer>*)data;
- (RTObject<WSSIBuffer>*)getValueAndReset;
@end

#endif // __WSCCCryptographicHash_DEFINED__

// Windows.Security.Cryptography.Core.PersistedKeyProvider
#ifndef __WSCCPersistedKeyProvider_DEFINED__
#define __WSCCPersistedKeyProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCPersistedKeyProvider : RTObject
+ (void)openKeyPairFromCertificateAsync:(WSCCCertificate*)certificate hashAlgorithmName:(NSString *)hashAlgorithmName padding:(WSCCCryptographicPadding)padding success:(void (^)(WSCCCryptographicKey*))success failure:(void (^)(NSError*))failure;
+ (WSCCCryptographicKey*)openPublicKeyFromCertificate:(WSCCCertificate*)certificate hashAlgorithmName:(NSString *)hashAlgorithmName padding:(WSCCCryptographicPadding)padding;
@end

#endif // __WSCCPersistedKeyProvider_DEFINED__

// Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData
#ifndef __WSCCEncryptedAndAuthenticatedData_DEFINED__
#define __WSCCEncryptedAndAuthenticatedData_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCEncryptedAndAuthenticatedData : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* authenticationTag;
@property (readonly) RTObject<WSSIBuffer>* encryptedData;
@end

#endif // __WSCCEncryptedAndAuthenticatedData_DEFINED__

// Windows.Security.Cryptography.Core.CryptographicEngine
#ifndef __WSCCCryptographicEngine_DEFINED__
#define __WSCCCryptographicEngine_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCCryptographicEngine : RTObject
+ (RTObject<WSSIBuffer>*)encrypt:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data iv:(RTObject<WSSIBuffer>*)iv;
+ (RTObject<WSSIBuffer>*)decrypt:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data iv:(RTObject<WSSIBuffer>*)iv;
+ (WSCCEncryptedAndAuthenticatedData*)encryptAndAuthenticate:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data nonce:(RTObject<WSSIBuffer>*)nonce authenticatedData:(RTObject<WSSIBuffer>*)authenticatedData;
+ (RTObject<WSSIBuffer>*)decryptAndAuthenticate:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data nonce:(RTObject<WSSIBuffer>*)nonce authenticationTag:(RTObject<WSSIBuffer>*)authenticationTag authenticatedData:(RTObject<WSSIBuffer>*)authenticatedData;
+ (RTObject<WSSIBuffer>*)sign:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data;
+ (BOOL)verifySignature:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data signature:(RTObject<WSSIBuffer>*)signature;
+ (RTObject<WSSIBuffer>*)deriveKeyMaterial:(WSCCCryptographicKey*)key parameters:(WSCCKeyDerivationParameters*)parameters desiredKeySize:(unsigned int)desiredKeySize;
+ (RTObject<WSSIBuffer>*)signHashedData:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data;
+ (BOOL)verifySignatureWithHashInput:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data signature:(RTObject<WSSIBuffer>*)signature;
+ (void)decryptAsync:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data iv:(RTObject<WSSIBuffer>*)iv success:(void (^)(RTObject<WSSIBuffer>*))success failure:(void (^)(NSError*))failure;
+ (void)signAsync:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data success:(void (^)(RTObject<WSSIBuffer>*))success failure:(void (^)(NSError*))failure;
+ (void)signHashedDataAsync:(WSCCCryptographicKey*)key data:(RTObject<WSSIBuffer>*)data success:(void (^)(RTObject<WSSIBuffer>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSCCCryptographicEngine_DEFINED__

// Windows.Security.Cryptography.Core.HashAlgorithmProvider
#ifndef __WSCCHashAlgorithmProvider_DEFINED__
#define __WSCCHashAlgorithmProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCHashAlgorithmProvider : RTObject
+ (WSCCHashAlgorithmProvider*)openAlgorithm:(NSString *)algorithm;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * algorithmName;
@property (readonly) unsigned int hashLength;
- (RTObject<WSSIBuffer>*)hashData:(RTObject<WSSIBuffer>*)data;
- (WSCCCryptographicHash*)createHash;
@end

#endif // __WSCCHashAlgorithmProvider_DEFINED__

// Windows.Security.Cryptography.Core.MacAlgorithmProvider
#ifndef __WSCCMacAlgorithmProvider_DEFINED__
#define __WSCCMacAlgorithmProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCMacAlgorithmProvider : RTObject
+ (WSCCMacAlgorithmProvider*)openAlgorithm:(NSString *)algorithm;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * algorithmName;
@property (readonly) unsigned int macLength;
- (WSCCCryptographicKey*)createKey:(RTObject<WSSIBuffer>*)keyMaterial;
- (WSCCCryptographicHash*)createHash:(RTObject<WSSIBuffer>*)keyMaterial;
@end

#endif // __WSCCMacAlgorithmProvider_DEFINED__

// Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
#ifndef __WSCCKeyDerivationAlgorithmProvider_DEFINED__
#define __WSCCKeyDerivationAlgorithmProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCKeyDerivationAlgorithmProvider : RTObject
+ (WSCCKeyDerivationAlgorithmProvider*)openAlgorithm:(NSString *)algorithm;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * algorithmName;
- (WSCCCryptographicKey*)createKey:(RTObject<WSSIBuffer>*)keyMaterial;
@end

#endif // __WSCCKeyDerivationAlgorithmProvider_DEFINED__

// Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
#ifndef __WSCCSymmetricKeyAlgorithmProvider_DEFINED__
#define __WSCCSymmetricKeyAlgorithmProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCSymmetricKeyAlgorithmProvider : RTObject
+ (WSCCSymmetricKeyAlgorithmProvider*)openAlgorithm:(NSString *)algorithm;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * algorithmName;
@property (readonly) unsigned int blockLength;
- (WSCCCryptographicKey*)createSymmetricKey:(RTObject<WSSIBuffer>*)keyMaterial;
@end

#endif // __WSCCSymmetricKeyAlgorithmProvider_DEFINED__

// Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
#ifndef __WSCCAsymmetricKeyAlgorithmProvider_DEFINED__
#define __WSCCAsymmetricKeyAlgorithmProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCAsymmetricKeyAlgorithmProvider : RTObject
+ (WSCCAsymmetricKeyAlgorithmProvider*)openAlgorithm:(NSString *)algorithm;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * algorithmName;
- (WSCCCryptographicKey*)createKeyPair:(unsigned int)keySize;
- (WSCCCryptographicKey*)importDefaultPrivateKeyBlob:(RTObject<WSSIBuffer>*)keyBlob;
- (WSCCCryptographicKey*)importKeyPairWithBlobType:(RTObject<WSSIBuffer>*)keyBlob BlobType:(WSCCCryptographicPrivateKeyBlobType)BlobType;
- (WSCCCryptographicKey*)importDefaultPublicKeyBlob:(RTObject<WSSIBuffer>*)keyBlob;
- (WSCCCryptographicKey*)importPublicKeyWithBlobType:(RTObject<WSSIBuffer>*)keyBlob BlobType:(WSCCCryptographicPublicKeyBlobType)BlobType;
- (WSCCCryptographicKey*)createKeyPairWithCurveName:(NSString *)curveName;
- (WSCCCryptographicKey*)createKeyPairWithCurveParameters:(NSArray* /* uint8_t */)parameters;
@end

#endif // __WSCCAsymmetricKeyAlgorithmProvider_DEFINED__

// Windows.Security.Cryptography.Core.HashAlgorithmNames
#ifndef __WSCCHashAlgorithmNames_DEFINED__
#define __WSCCHashAlgorithmNames_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCHashAlgorithmNames : RTObject
+ (NSString *)md5;
+ (NSString *)sha1;
+ (NSString *)sha256;
+ (NSString *)sha384;
+ (NSString *)sha512;
@end

#endif // __WSCCHashAlgorithmNames_DEFINED__

// Windows.Security.Cryptography.Core.MacAlgorithmNames
#ifndef __WSCCMacAlgorithmNames_DEFINED__
#define __WSCCMacAlgorithmNames_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCMacAlgorithmNames : RTObject
+ (NSString *)aesCmac;
+ (NSString *)hmacMd5;
+ (NSString *)hmacSha1;
+ (NSString *)hmacSha256;
+ (NSString *)hmacSha384;
+ (NSString *)hmacSha512;
@end

#endif // __WSCCMacAlgorithmNames_DEFINED__

// Windows.Security.Cryptography.Core.SymmetricAlgorithmNames
#ifndef __WSCCSymmetricAlgorithmNames_DEFINED__
#define __WSCCSymmetricAlgorithmNames_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCSymmetricAlgorithmNames : RTObject
+ (NSString *)aesCbc;
+ (NSString *)aesCbcPkcs7;
+ (NSString *)aesCcm;
+ (NSString *)aesEcb;
+ (NSString *)aesEcbPkcs7;
+ (NSString *)aesGcm;
+ (NSString *)desCbc;
+ (NSString *)desCbcPkcs7;
+ (NSString *)desEcb;
+ (NSString *)desEcbPkcs7;
+ (NSString *)rc2Cbc;
+ (NSString *)rc2CbcPkcs7;
+ (NSString *)rc2Ecb;
+ (NSString *)rc2EcbPkcs7;
+ (NSString *)rc4;
+ (NSString *)tripleDesCbc;
+ (NSString *)tripleDesCbcPkcs7;
+ (NSString *)tripleDesEcb;
+ (NSString *)tripleDesEcbPkcs7;
@end

#endif // __WSCCSymmetricAlgorithmNames_DEFINED__

// Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
#ifndef __WSCCAsymmetricAlgorithmNames_DEFINED__
#define __WSCCAsymmetricAlgorithmNames_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCAsymmetricAlgorithmNames : RTObject
+ (NSString *)ecdsaP521Sha512;
+ (NSString *)dsaSha1;
+ (NSString *)dsaSha256;
+ (NSString *)ecdsaP256Sha256;
+ (NSString *)ecdsaP384Sha384;
+ (NSString *)rsaSignPkcs1Sha256;
+ (NSString *)rsaOaepSha1;
+ (NSString *)rsaOaepSha256;
+ (NSString *)rsaOaepSha384;
+ (NSString *)rsaOaepSha512;
+ (NSString *)rsaPkcs1;
+ (NSString *)rsaSignPkcs1Sha1;
+ (NSString *)rsaSignPkcs1Sha384;
+ (NSString *)rsaSignPkcs1Sha512;
+ (NSString *)rsaSignPssSha1;
+ (NSString *)rsaSignPssSha256;
+ (NSString *)rsaSignPssSha384;
+ (NSString *)rsaSignPssSha512;
+ (NSString *)ecdsaSha384;
+ (NSString *)ecdsaSha512;
+ (NSString *)ecdsaSha256;
@end

#endif // __WSCCAsymmetricAlgorithmNames_DEFINED__

// Windows.Security.Cryptography.Core.EccCurveNames
#ifndef __WSCCEccCurveNames_DEFINED__
#define __WSCCEccCurveNames_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCEccCurveNames : RTObject
+ (NSArray* /* NSString * */)allEccCurveNames;
+ (NSString *)brainpoolP160r1;
+ (NSString *)brainpoolP160t1;
+ (NSString *)brainpoolP192r1;
+ (NSString *)brainpoolP192t1;
+ (NSString *)brainpoolP224r1;
+ (NSString *)brainpoolP224t1;
+ (NSString *)brainpoolP256r1;
+ (NSString *)brainpoolP256t1;
+ (NSString *)brainpoolP320r1;
+ (NSString *)brainpoolP320t1;
+ (NSString *)brainpoolP384r1;
+ (NSString *)brainpoolP384t1;
+ (NSString *)brainpoolP512r1;
+ (NSString *)brainpoolP512t1;
+ (NSString *)curve25519;
+ (NSString *)ec192wapi;
+ (NSString *)nistP192;
+ (NSString *)nistP224;
+ (NSString *)nistP256;
+ (NSString *)nistP384;
+ (NSString *)nistP521;
+ (NSString *)numsP256t1;
+ (NSString *)numsP384t1;
+ (NSString *)numsP512t1;
+ (NSString *)secP160k1;
+ (NSString *)secP160r1;
+ (NSString *)secP160r2;
+ (NSString *)secP192k1;
+ (NSString *)secP192r1;
+ (NSString *)secP224k1;
+ (NSString *)secP224r1;
+ (NSString *)secP256k1;
+ (NSString *)secP256r1;
+ (NSString *)secP384r1;
+ (NSString *)secP521r1;
+ (NSString *)wtls12;
+ (NSString *)wtls7;
+ (NSString *)wtls9;
+ (NSString *)x962P192v1;
+ (NSString *)x962P192v2;
+ (NSString *)x962P192v3;
+ (NSString *)x962P239v1;
+ (NSString *)x962P239v2;
+ (NSString *)x962P239v3;
+ (NSString *)x962P256v1;
@end

#endif // __WSCCEccCurveNames_DEFINED__

// Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
#ifndef __WSCCKeyDerivationAlgorithmNames_DEFINED__
#define __WSCCKeyDerivationAlgorithmNames_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYCOREEXPORT
@interface WSCCKeyDerivationAlgorithmNames : RTObject
+ (NSString *)pbkdf2Sha256;
+ (NSString *)pbkdf2Md5;
+ (NSString *)pbkdf2Sha1;
+ (NSString *)sp800108CtrHmacSha512;
+ (NSString *)pbkdf2Sha384;
+ (NSString *)pbkdf2Sha512;
+ (NSString *)sp800108CtrHmacMd5;
+ (NSString *)sp800108CtrHmacSha1;
+ (NSString *)sp800108CtrHmacSha256;
+ (NSString *)sp800108CtrHmacSha384;
+ (NSString *)sp80056aConcatMd5;
+ (NSString *)sp80056aConcatSha1;
+ (NSString *)sp80056aConcatSha256;
+ (NSString *)sp80056aConcatSha384;
+ (NSString *)sp80056aConcatSha512;
+ (NSString *)capiKdfSha1;
+ (NSString *)capiKdfSha256;
+ (NSString *)capiKdfSha384;
+ (NSString *)capiKdfSha512;
+ (NSString *)capiKdfMd5;
@end

#endif // __WSCCKeyDerivationAlgorithmNames_DEFINED__


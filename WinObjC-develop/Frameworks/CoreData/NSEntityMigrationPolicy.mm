//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
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

#import <StubReturn.h>
#import <CoreData/NSEntityMigrationPolicy.h>

NSString* const NSMigrationManagerKey = @"NSMigrationManagerKey";
NSString* const NSMigrationSourceObjectKey = @"NSMigrationSourceObjectKey";
NSString* const NSMigrationDestinationObjectKey = @"NSMigrationDestinationObjectKey";
NSString* const NSMigrationEntityMappingKey = @"NSMigrationEntityMappingKey";
NSString* const NSMigrationPropertyMappingKey = @"NSMigrationPropertyMappingKey";
NSString* const NSMigrationEntityPolicyKey = @"NSMigrationEntityPolicyKey";

@implementation NSEntityMigrationPolicy
/**
@Status Stub
@Notes
*/
- (BOOL)beginEntityMapping:(NSEntityMapping*)mapping manager:(NSMigrationManager*)manager error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
@Status Stub
@Notes
*/
- (BOOL)createDestinationInstancesForSourceInstance:(NSManagedObject*)sInstance
                                      entityMapping:(NSEntityMapping*)mapping
                                            manager:(NSMigrationManager*)manager
                                              error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
@Status Stub
@Notes
*/
- (BOOL)endInstanceCreationForEntityMapping:(NSEntityMapping*)mapping
                                    manager:(NSMigrationManager*)manager
                                      error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
@Status Stub
@Notes
*/
- (BOOL)createRelationshipsForDestinationInstance:(NSManagedObject*)dInstance
                                    entityMapping:(NSEntityMapping*)mapping
                                          manager:(NSMigrationManager*)manager
                                            error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
@Status Stub
@Notes
*/
- (BOOL)endRelationshipCreationForEntityMapping:(NSEntityMapping*)mapping
                                        manager:(NSMigrationManager*)manager
                                          error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
@Status Stub
@Notes
*/
- (BOOL)performCustomValidationForEntityMapping:(NSEntityMapping*)mapping
                                        manager:(NSMigrationManager*)manager
                                          error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
@Status Stub
@Notes
*/
- (BOOL)endEntityMapping:(NSEntityMapping*)mapping manager:(NSMigrationManager*)manager error:(NSError* _Nullable*)error {
    UNIMPLEMENTED();
    return StubReturn();
}

@end

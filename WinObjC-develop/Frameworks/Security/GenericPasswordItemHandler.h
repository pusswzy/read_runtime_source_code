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

#pragma once

#import "SecItemHandlerProtocol.h"

#include "COMIncludes.h"
#import <winrt/Windows.Security.Credentials.h>
#include "COMIncludes_End.h"

@interface GenericPasswordItemHandler : NSObject <SecItemHandler>

- (instancetype)init;
- (instancetype)initWithVault:(const winrt::Windows::Security::Credentials::PasswordVault&)vault;

- (OSStatus)update:(NSDictionary*)queryDictionary
    withAttributes:(NSDictionary*)attributesToUpdate
 attributesUpdated:(NSUInteger*)attributesUpdated;
- (OSStatus)add:(NSDictionary*)attributes withResult:(id*)result;
- (OSStatus)remove:(NSDictionary*)queryDictionary;
- (OSStatus)query:(NSDictionary*)queryDictionary withResult:(id*)result;

@end
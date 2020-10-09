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

@interface NSURLRequest () {
@public
    NSURL* _URL;
    NSURLRequestCachePolicy _cachePolicy;
    NSTimeInterval _timeoutInterval;
    NSURL* _mainDocumentURL;
    NSURLRequestNetworkServiceType _networkServiceType;
    BOOL _HTTPShouldUsePipelining;
    NSString* _HTTPMethod;
    NSData* _HTTPBody;
    NSInputStream* _HTTPBodyStream;
    NSMutableDictionary* _allHTTPHeaderFields;
    BOOL _HTTPShouldHandleCookies;
    BOOL _allowsCellularAccess;

    StrongId<NSMutableDictionary<NSString*, id>> _properties; // For [NSURLProtocol propertyForKey:] et al.
}
- (id)_propertyForKey:(NSString*)key;
- (void)_setProperty:(id)value forKey:(NSString*)key;
- (void)_removePropertyForKey:(NSString*)key;
@end
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
#pragma once

#import <Foundation/FoundationErrors.h>
#import <Foundation/FoundationExport.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSObject.h>

#import <Foundation/NSArchiver.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSAssertionHandler.h>
#import <Foundation/NSAttributedString.h>
#import <Foundation/NSAutoreleasePool.h>
#import <Foundation/NSBlockOperation.h>
#import <Foundation/NSBundle.h>
#import <Foundation/NSBundleResourceRequest.h>
#import <Foundation/NSByteCountFormatter.h>
#import <Foundation/NSByteOrder.h>
#import <Foundation/NSCache.h>
#import <Foundation/NSCachedURLResponse.h>
#import <Foundation/NSCalendar.h>
#import <Foundation/NSCalendarDate.h>
#import <Foundation/NSCharacterSet.h>
#import <Foundation/NSClassDescription.h>
#import <Foundation/NSCoder.h>
#import <Foundation/NSComparisonPredicate.h>
#import <Foundation/NSCompoundPredicate.h>
#import <Foundation/NSCondition.h>
#import <Foundation/NSConditionLock.h>
#import <Foundation/NSCountedSet.h>
#import <Foundation/NSData.h>
#import <Foundation/NSDataDetector.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSDateComponents.h>
#import <Foundation/NSDateComponentsFormatter.h>
#import <Foundation/NSDateFormatter.h>
#import <Foundation/NSDateIntervalFormatter.h>
#import <Foundation/NSDebug.h>
#import <Foundation/NSDecimal.h>
#import <Foundation/NSDecimalNumber.h>
#import <Foundation/NSDecimalNumberBehaviors.h>
#import <Foundation/NSDecimalNumberHandler.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSDirectoryEnumerator.h>
#import <Foundation/NSDiscardableContent.h>
#import <Foundation/NSDistributedNotificationCenter.h>
#import <Foundation/NSEnergyFormatter.h>
#import <Foundation/NSEnumerator.h>
#import <Foundation/NSError.h>
#import <Foundation/NSErrorRecoveryAttempting.h>
#import <Foundation/NSException.h>
#import <Foundation/NSExpression.h>
#import <Foundation/NSExtensionContext.h>
#import <Foundation/NSExtensionItem.h>
#import <Foundation/NSExtensionRequestHandling.h>
#import <Foundation/NSFastEnumeration.h>
#import <Foundation/NSFileAccessIntent.h>
#import <Foundation/NSFileCoordinator.h>
#import <Foundation/NSFileHandle.h>
#import <Foundation/NSFileManager.h>
#import <Foundation/NSFilePresenter.h>
#import <Foundation/NSFileSecurity.h>
#import <Foundation/NSFileVersion.h>
#import <Foundation/NSFileWrapper.h>
#import <Foundation/NSFormatter.h>
#import <Foundation/NSHashTable.h>
#import <Foundation/NSHost.h>
#import <Foundation/NSHTTPCookie.h>
#import <Foundation/NSHTTPCookieStorage.h>
#import <Foundation/NSHTTPURLResponse.h>
#import <Foundation/NSIndexPath.h>
#import <Foundation/NSIndexSet.h>
#import <Foundation/NSInputStream.h>
#import <Foundation/NSInvocation.h>
#import <Foundation/NSInvocationOperation.h>
#import <Foundation/NSItemProvider.h>
#import <Foundation/NSJSONSerialization.h>
#import <Foundation/NSKeyedArchiver.h>
#import <Foundation/NSKeyedUnarchiver.h>
#import <Foundation/NSKeyValueCoding.h>
#import <Foundation/NSKeyValueObserving.h>
#import <Foundation/NSLengthFormatter.h>
#import <Foundation/NSLinguisticTagger.h>
#import <Foundation/NSLocale.h>
#import <Foundation/NSLock.h>
#import <Foundation/NSLocking.h>
#import <Foundation/NSMachPort.h>
#import <Foundation/NSMapTable.h>
#import <Foundation/NSMassFormatter.h>
#import <Foundation/NSMessagePort.h>
#import <Foundation/NSMetadataItem.h>
#import <Foundation/NSMetadataQuery.h>
#import <Foundation/NSMetadataQueryAttributeValueTuple.h>
#import <Foundation/NSMetadataQueryResultGroup.h>
#import <Foundation/NSMethodSignature.h>
#import <Foundation/NSMutableArray.h>
#import <Foundation/NSMutableAttributedString.h>
#import <Foundation/NSMutableCharacterSet.h>
#import <Foundation/NSMutableData.h>
#import <Foundation/NSMutableDictionary.h>
#import <Foundation/NSMutableIndexSet.h>
#import <Foundation/NSMutableOrderedSet.h>
#import <Foundation/NSMutableSet.h>
#import <Foundation/NSMutableString.h>
#import <Foundation/NSMutableURLRequest.h>
#import <Foundation/NSNetService.h>
#import <Foundation/NSNetServiceBrowser.h>
#import <Foundation/NSNotification.h>
#import <Foundation/NSNotificationCenter.h>
#import <Foundation/NSNotificationQueue.h>
#import <Foundation/NSNull.h>
#import <Foundation/NSNumber.h>
#import <Foundation/NSNumberFormatter.h>
#import <Foundation/NSOperation.h>
#import <Foundation/NSOperationQueue.h>
#import <Foundation/NSOrderedSet.h>
#import <Foundation/NSOrthography.h>
#import <Foundation/NSOutputStream.h>
#import <Foundation/NSPathUtilities.h>
#import <Foundation/NSPersonNameComponents.h>
#import <Foundation/NSPersonNameComponentsFormatter.h>
#import <Foundation/NSPipe.h>
#import <Foundation/NSPointerArray.h>
#import <Foundation/NSPointerFunctions.h>
#import <Foundation/NSPort.h>
#import <Foundation/NSPortCoder.h>
#import <Foundation/NSPredicate.h>
#import <Foundation/NSProcessInfo.h>
#import <Foundation/NSProgress.h>
#import <Foundation/NSProgressReporting.h>
#import <Foundation/NSPropertyListSerialization.h>
#import <Foundation/NSProxy.h>
#import <Foundation/NSPurgeableData.h>
#import <Foundation/NSRange.h>
#import <Foundation/NSRecursiveLock.h>
#import <Foundation/NSRegularExpression.h>
#import <Foundation/NSRunLoop.h>
#import <Foundation/NSScanner.h>
#import <Foundation/NSScriptWhoseTests.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSSocketPort.h>
#import <Foundation/NSSortDescriptor.h>
#import <Foundation/NSStream.h>
#import <Foundation/NSString.h>
#import <Foundation/NSTextCheckingResult.h>
#import <Foundation/NSThread.h>
#import <Foundation/NSTimer.h>
#import <Foundation/NSTimeZone.h>
#import <Foundation/NSUbiquitousKeyValueStore.h>
#import <Foundation/NSUnarchiver.h>
#import <Foundation/NSUndoManager.h>
#import <Foundation/NSURL.h>
#import <Foundation/NSURLAuthenticationChallenge.h>
#import <Foundation/NSURLCache.h>
#import <Foundation/NSURLComponents.h>
#import <Foundation/NSURLConnection.h>
#import <Foundation/NSURLCredential.h>
#import <Foundation/NSURLCredentialStorage.h>
#import <Foundation/NSURLDownload.h>
#import <Foundation/NSURLError.h>
#import <Foundation/NSURLProtectionSpace.h>
#import <Foundation/NSURLProtocol.h>
#import <Foundation/NSURLQueryItem.h>
#import <Foundation/NSURLRequest.h>
#import <Foundation/NSURLResponse.h>
#import <Foundation/NSURLSession.h>
#import <Foundation/NSURLSessionConfiguration.h>
#import <Foundation/NSUserActivity.h>
#import <Foundation/NSUserDefaults.h>
#import <Foundation/NSUUID.h>
#import <Foundation/NSValue.h>
#import <Foundation/NSValueTransformer.h>
#import <Foundation/NSXMLDocument.h>
#import <Foundation/NSXMLDTD.h>
#import <Foundation/NSXMLDTDNode.h>
#import <Foundation/NSXMLElement.h>
#import <Foundation/NSXMLNode.h>
#import <Foundation/NSXMLNodeOptions.h>
#import <Foundation/NSXMLParser.h>
#import <Foundation/NSZone.h>
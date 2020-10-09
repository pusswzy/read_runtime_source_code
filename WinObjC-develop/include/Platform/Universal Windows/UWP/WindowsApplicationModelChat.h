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

// WindowsApplicationModelChat.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelChat.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WACChatMessageTransportConfiguration, WACChatMessage, WACChatMessageChange, WACChatMessageChangeReader, WACChatMessageAttachment, WACChatConversationThreadingInfo, WACChatRecipientDeliveryInfo, WACChatMessageChangeTracker, WACChatMessageReader, WACChatMessageValidationResult, WACChatMessageStore, WACChatMessageChangedEventArgs, WACChatConversation, WACChatConversationReader, WACChatQueryOptions, WACChatSearchReader, WACChatMessageStoreChangedEventArgs, WACChatMessageChangedDeferral, WACChatMessageTransport, WACChatSyncManager, WACChatCapabilities, WACRemoteParticipantComposingChangedEventArgs, WACChatSyncConfiguration, WACRcsEndUserMessageManager, WACRcsTransport, WACRcsTransportConfiguration, WACRcsServiceKindSupportedChangedEventArgs, WACRcsEndUserMessageAvailableEventArgs, WACRcsEndUserMessageAction, WACRcsEndUserMessage, WACChatMessageManager, WACChatMessageNotificationTriggerDetails, WACChatMessageBlocking, WACChatCapabilitiesManager, WACRcsManager, WACRcsEndUserMessageAvailableTriggerDetails;
@protocol WACIChatMessageTransport, WACIChatMessageTransport2, WACIChatMessageTransportConfiguration, WACIChatMessageChange, WACIChatMessageChangeReader, WACIChatMessageChangeTracker, WACIChatMessageValidationResult, WACIChatMessage, WACIChatMessage3, WACIChatMessage2, WACIChatMessage4, WACIChatQueryOptions, WACIChatMessageStore, WACIChatMessageStore2, WACIChatMessageStore3, WACIChatMessageStoreChangedEventArgs, WACIChatMessageChangedEventArgs, WACIChatMessageChangedDeferral, WACIChatMessageBlockingStatic, WACIChatMessageManagerStatic, WACIChatMessageManager2Statics, WACIChatMessageManagerStatics3, WACIChatMessageReader, WACIChatMessageReader2, WACIChatSearchReader, WACIChatItem, WACIChatMessageAttachment, WACIChatMessageAttachment2, WACIChatMessageAttachmentFactory, WACIChatMessageNotificationTriggerDetails, WACIChatMessageNotificationTriggerDetails2, WACIChatCapabilities, WACIChatCapabilitiesManagerStatics, WACIChatRecipientDeliveryInfo, WACIChatConversationThreadingInfo, WACIChatConversationReader, WACIChatConversation, WACIChatConversation2, WACIRemoteParticipantComposingChangedEventArgs, WACIChatSyncManager, WACIChatSyncConfiguration, WACIRcsServiceKindSupportedChangedEventArgs, WACIRcsManagerStatics, WACIRcsTransport, WACIRcsTransportConfiguration, WACIRcsEndUserMessageManager, WACIRcsEndUserMessageAction, WACIRcsEndUserMessage, WACIRcsEndUserMessageAvailableEventArgs, WACIRcsEndUserMessageAvailableTriggerDetails;

// Windows.ApplicationModel.Chat.ChatMessageStatus
enum _WACChatMessageStatus {
    WACChatMessageStatusDraft = 0,
    WACChatMessageStatusSending = 1,
    WACChatMessageStatusSent = 2,
    WACChatMessageStatusSendRetryNeeded = 3,
    WACChatMessageStatusSendFailed = 4,
    WACChatMessageStatusReceived = 5,
    WACChatMessageStatusReceiveDownloadNeeded = 6,
    WACChatMessageStatusReceiveDownloadFailed = 7,
    WACChatMessageStatusReceiveDownloading = 8,
    WACChatMessageStatusDeleted = 9,
    WACChatMessageStatusDeclined = 10,
    WACChatMessageStatusCancelled = 11,
    WACChatMessageStatusRecalled = 12,
    WACChatMessageStatusReceiveRetryNeeded = 13,
};
typedef unsigned WACChatMessageStatus;

// Windows.ApplicationModel.Chat.ChatMessageKind
enum _WACChatMessageKind {
    WACChatMessageKindStandard = 0,
    WACChatMessageKindFileTransferRequest = 1,
    WACChatMessageKindTransportCustom = 2,
    WACChatMessageKindJoinedConversation = 3,
    WACChatMessageKindLeftConversation = 4,
    WACChatMessageKindOtherParticipantJoinedConversation = 5,
    WACChatMessageKindOtherParticipantLeftConversation = 6,
};
typedef unsigned WACChatMessageKind;

// Windows.ApplicationModel.Chat.ChatMessageOperatorKind
enum _WACChatMessageOperatorKind {
    WACChatMessageOperatorKindUnspecified = 0,
    WACChatMessageOperatorKindSms = 1,
    WACChatMessageOperatorKindMms = 2,
    WACChatMessageOperatorKindRcs = 3,
};
typedef unsigned WACChatMessageOperatorKind;

// Windows.ApplicationModel.Chat.ChatMessageChangeType
enum _WACChatMessageChangeType {
    WACChatMessageChangeTypeMessageCreated = 0,
    WACChatMessageChangeTypeMessageModified = 1,
    WACChatMessageChangeTypeMessageDeleted = 2,
    WACChatMessageChangeTypeChangeTrackingLost = 3,
};
typedef unsigned WACChatMessageChangeType;

// Windows.ApplicationModel.Chat.ChatMessageValidationStatus
enum _WACChatMessageValidationStatus {
    WACChatMessageValidationStatusValid = 0,
    WACChatMessageValidationStatusNoRecipients = 1,
    WACChatMessageValidationStatusInvalidData = 2,
    WACChatMessageValidationStatusMessageTooLarge = 3,
    WACChatMessageValidationStatusTooManyRecipients = 4,
    WACChatMessageValidationStatusTransportInactive = 5,
    WACChatMessageValidationStatusTransportNotFound = 6,
    WACChatMessageValidationStatusTooManyAttachments = 7,
    WACChatMessageValidationStatusInvalidRecipients = 8,
    WACChatMessageValidationStatusInvalidBody = 9,
    WACChatMessageValidationStatusInvalidOther = 10,
    WACChatMessageValidationStatusValidWithLargeMessage = 11,
    WACChatMessageValidationStatusVoiceRoamingRestriction = 12,
    WACChatMessageValidationStatusDataRoamingRestriction = 13,
};
typedef unsigned WACChatMessageValidationStatus;

// Windows.ApplicationModel.Chat.ChatConversationThreadingKind
enum _WACChatConversationThreadingKind {
    WACChatConversationThreadingKindParticipants = 0,
    WACChatConversationThreadingKindContactId = 1,
    WACChatConversationThreadingKindConversationId = 2,
    WACChatConversationThreadingKindCustom = 3,
};
typedef unsigned WACChatConversationThreadingKind;

// Windows.ApplicationModel.Chat.ChatStoreChangedEventKind
enum _WACChatStoreChangedEventKind {
    WACChatStoreChangedEventKindNotificationsMissed = 0,
    WACChatStoreChangedEventKindStoreModified = 1,
    WACChatStoreChangedEventKindMessageCreated = 2,
    WACChatStoreChangedEventKindMessageModified = 3,
    WACChatStoreChangedEventKindMessageDeleted = 4,
    WACChatStoreChangedEventKindConversationModified = 5,
    WACChatStoreChangedEventKindConversationDeleted = 6,
    WACChatStoreChangedEventKindConversationTransportDeleted = 7,
};
typedef unsigned WACChatStoreChangedEventKind;

// Windows.ApplicationModel.Chat.ChatTransportErrorCodeCategory
enum _WACChatTransportErrorCodeCategory {
    WACChatTransportErrorCodeCategoryNone = 0,
    WACChatTransportErrorCodeCategoryHttp = 1,
    WACChatTransportErrorCodeCategoryNetwork = 2,
    WACChatTransportErrorCodeCategoryMmsServer = 3,
};
typedef unsigned WACChatTransportErrorCodeCategory;

// Windows.ApplicationModel.Chat.ChatTransportInterpretedErrorCode
enum _WACChatTransportInterpretedErrorCode {
    WACChatTransportInterpretedErrorCodeNone = 0,
    WACChatTransportInterpretedErrorCodeUnknown = 1,
    WACChatTransportInterpretedErrorCodeInvalidRecipientAddress = 2,
    WACChatTransportInterpretedErrorCodeNetworkConnectivity = 3,
    WACChatTransportInterpretedErrorCodeServiceDenied = 4,
    WACChatTransportInterpretedErrorCodeTimeout = 5,
};
typedef unsigned WACChatTransportInterpretedErrorCode;

// Windows.ApplicationModel.Chat.ChatMessageTransportKind
enum _WACChatMessageTransportKind {
    WACChatMessageTransportKindText = 0,
    WACChatMessageTransportKindUntriaged = 1,
    WACChatMessageTransportKindBlocked = 2,
    WACChatMessageTransportKindCustom = 3,
};
typedef unsigned WACChatMessageTransportKind;

// Windows.ApplicationModel.Chat.RcsServiceKind
enum _WACRcsServiceKind {
    WACRcsServiceKindChat = 0,
    WACRcsServiceKindGroupChat = 1,
    WACRcsServiceKindFileTransfer = 2,
    WACRcsServiceKindCapability = 3,
};
typedef unsigned WACRcsServiceKind;

// Windows.ApplicationModel.Chat.ChatItemKind
enum _WACChatItemKind {
    WACChatItemKindMessage = 0,
    WACChatItemKindConversation = 1,
};
typedef unsigned WACChatItemKind;

// Windows.ApplicationModel.Chat.ChatRestoreHistorySpan
enum _WACChatRestoreHistorySpan {
    WACChatRestoreHistorySpanLastMonth = 0,
    WACChatRestoreHistorySpanLastYear = 1,
    WACChatRestoreHistorySpanAnyTime = 2,
};
typedef unsigned WACChatRestoreHistorySpan;

#include "WindowsFoundation.h"
#include "WindowsMediaMediaProperties.h"
#include "WindowsSecurityCredentials.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Chat.IChatItem
#ifndef __WACIChatItem_DEFINED__
#define __WACIChatItem_DEFINED__

@protocol WACIChatItem
@property (readonly) WACChatItemKind itemKind;
@end

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACIChatItem : RTObject <WACIChatItem>
@end

#endif // __WACIChatItem_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageTransportConfiguration
#ifndef __WACChatMessageTransportConfiguration_DEFINED__
#define __WACChatMessageTransportConfiguration_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageTransportConfiguration : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSDictionary* /* NSString *, RTObject* */ extendedProperties;
@property (readonly) int maxAttachmentCount;
@property (readonly) int maxMessageSizeInKilobytes;
@property (readonly) int maxRecipientCount;
@property (readonly) WMMMediaEncodingProfile* supportedVideoFormat;
@end

#endif // __WACChatMessageTransportConfiguration_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessage
#ifndef __WACChatMessage_DEFINED__
#define __WACChatMessage_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessage : RTObject <WACIChatItem>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACChatItemKind itemKind;
@property BOOL isIncoming;
@property BOOL isForwardingDisabled;
@property (retain) NSString * transportId;
@property WACChatMessageStatus status;
@property (retain) NSString * from;
@property (retain) NSString * body;
@property (retain) NSString * subject;
@property BOOL isRead;
@property (retain) WFDateTime* networkTimestamp;
@property (retain) WFDateTime* localTimestamp;
@property (readonly) NSDictionary* /* NSString *, WACChatMessageStatus */ recipientSendStatuses;
@property (readonly) NSMutableArray* /* NSString * */ recipients;
@property (readonly) NSString * transportFriendlyName;
@property (readonly) NSMutableArray* /* WACChatMessageAttachment* */ attachments;
@property (readonly) NSString * id;
@property BOOL isSeen;
@property WACChatMessageKind messageKind;
@property BOOL isReceivedDuringQuietHours;
@property BOOL isAutoReply;
@property uint64_t estimatedDownloadSize;
@property (retain) WACChatConversationThreadingInfo* threadingInfo;
@property BOOL shouldSuppressNotification;
@property (retain) NSString * remoteId;
@property WACChatMessageOperatorKind messageOperatorKind;
@property (readonly) BOOL isReplyDisabled;
@property (readonly) BOOL isSimMessage;
@property (readonly) NSMutableArray* /* WACChatRecipientDeliveryInfo* */ recipientsDeliveryInfos;
@property (retain) NSString * syncId;
@end

#endif // __WACChatMessage_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageChange
#ifndef __WACChatMessageChange_DEFINED__
#define __WACChatMessageChange_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageChange : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACChatMessageChangeType changeType;
@property (readonly) WACChatMessage* message;
@end

#endif // __WACChatMessageChange_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageChangeReader
#ifndef __WACChatMessageChangeReader_DEFINED__
#define __WACChatMessageChangeReader_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageChangeReader : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)acceptChanges;
- (void)acceptChangesThrough:(WACChatMessageChange*)lastChangeToAcknowledge;
- (void)readBatchAsyncWithSuccess:(void (^)(NSArray* /* WACChatMessageChange* */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACChatMessageChangeReader_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageAttachment
#ifndef __WACChatMessageAttachment_DEFINED__
#define __WACChatMessageAttachment_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageAttachment : RTObject
+ (WACChatMessageAttachment*)makeChatMessageAttachment:(NSString *)mimeType dataStreamReference:(RTObject<WSSIRandomAccessStreamReference>*)dataStreamReference ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * text;
@property (retain) NSString * mimeType;
@property unsigned int groupId;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* dataStreamReference;
@property double transferProgress;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* thumbnail;
@property (retain) NSString * originalFileName;
@end

#endif // __WACChatMessageAttachment_DEFINED__

// Windows.ApplicationModel.Chat.ChatConversationThreadingInfo
#ifndef __WACChatConversationThreadingInfo_DEFINED__
#define __WACChatConversationThreadingInfo_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatConversationThreadingInfo : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WACChatConversationThreadingKind kind;
@property (retain) NSString * custom;
@property (retain) NSString * conversationId;
@property (retain) NSString * contactId;
@property (readonly) NSMutableArray* /* NSString * */ participants;
@end

#endif // __WACChatConversationThreadingInfo_DEFINED__

// Windows.ApplicationModel.Chat.ChatRecipientDeliveryInfo
#ifndef __WACChatRecipientDeliveryInfo_DEFINED__
#define __WACChatRecipientDeliveryInfo_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatRecipientDeliveryInfo : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * transportAddress;
@property (retain) id /* WFDateTime* */ readTime;
@property (retain) id /* WFDateTime* */ deliveryTime;
@property (readonly) BOOL isErrorPermanent;
@property (readonly) WACChatMessageStatus status;
@property (readonly) int transportErrorCode;
@property (readonly) WACChatTransportErrorCodeCategory transportErrorCodeCategory;
@property (readonly) WACChatTransportInterpretedErrorCode transportInterpretedErrorCode;
@end

#endif // __WACChatRecipientDeliveryInfo_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageChangeTracker
#ifndef __WACChatMessageChangeTracker_DEFINED__
#define __WACChatMessageChangeTracker_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageChangeTracker : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)enable;
- (WACChatMessageChangeReader*)getChangeReader;
- (void)reset;
@end

#endif // __WACChatMessageChangeTracker_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageReader
#ifndef __WACChatMessageReader_DEFINED__
#define __WACChatMessageReader_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageReader : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)readBatchAsyncWithSuccess:(void (^)(NSArray* /* WACChatMessage* */))success failure:(void (^)(NSError*))failure;
- (void)readBatchWithCountAsync:(int)count success:(void (^)(NSArray* /* WACChatMessage* */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACChatMessageReader_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageValidationResult
#ifndef __WACChatMessageValidationResult_DEFINED__
#define __WACChatMessageValidationResult_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageValidationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* unsigned int */ maxPartCount;
@property (readonly) id /* unsigned int */ partCount;
@property (readonly) id /* unsigned int */ remainingCharacterCountInPart;
@property (readonly) WACChatMessageValidationStatus status;
@end

#endif // __WACChatMessageValidationResult_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageStore
#ifndef __WACChatMessageStore_DEFINED__
#define __WACChatMessageStore_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageStore : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACChatMessageChangeTracker* changeTracker;
- (EventRegistrationToken)addMessageChangedEvent:(void(^)(WACChatMessageStore*, WACChatMessageChangedEventArgs*))del;
- (void)removeMessageChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoreChangedEvent:(void(^)(WACChatMessageStore*, WACChatMessageStoreChangedEventArgs*))del;
- (void)removeStoreChangedEvent:(EventRegistrationToken)tok;
- (RTObject<WFIAsyncAction>*)deleteMessageAsync:(NSString *)localMessageId;
- (RTObject<WFIAsyncAction>*)downloadMessageAsync:(NSString *)localChatMessageId;
- (void)getMessageAsync:(NSString *)localChatMessageId success:(void (^)(WACChatMessage*))success failure:(void (^)(NSError*))failure;
- (WACChatMessageReader*)getMessageReader1;
- (WACChatMessageReader*)getMessageReader2:(WFTimeSpan*)recentTimeLimit;
- (RTObject<WFIAsyncAction>*)markMessageReadAsync:(NSString *)localChatMessageId;
- (RTObject<WFIAsyncAction>*)retrySendMessageAsync:(NSString *)localChatMessageId;
- (RTObject<WFIAsyncAction>*)sendMessageAsync:(WACChatMessage*)chatMessage;
- (WACChatMessageValidationResult*)validateMessage:(WACChatMessage*)chatMessage;
- (void)forwardMessageAsync:(NSString *)localChatMessageId addresses:(id<NSFastEnumeration> /* NSString * */)addresses success:(void (^)(WACChatMessage*))success failure:(void (^)(NSError*))failure;
- (void)getConversationAsync:(NSString *)conversationId success:(void (^)(WACChatConversation*))success failure:(void (^)(NSError*))failure;
- (void)getConversationForTransportsAsync:(NSString *)conversationId transportIds:(id<NSFastEnumeration> /* NSString * */)transportIds success:(void (^)(WACChatConversation*))success failure:(void (^)(NSError*))failure;
- (void)getConversationFromThreadingInfoAsync:(WACChatConversationThreadingInfo*)threadingInfo success:(void (^)(WACChatConversation*))success failure:(void (^)(NSError*))failure;
- (WACChatConversationReader*)getConversationReader;
- (WACChatConversationReader*)getConversationForTransportsReader:(id<NSFastEnumeration> /* NSString * */)transportIds;
- (void)getMessageByRemoteIdAsync:(NSString *)transportId remoteId:(NSString *)remoteId success:(void (^)(WACChatMessage*))success failure:(void (^)(NSError*))failure;
- (void)getUnseenCountAsyncWithSuccess:(void (^)(int))success failure:(void (^)(NSError*))failure;
- (void)getUnseenCountForTransportsReaderAsync:(id<NSFastEnumeration> /* NSString * */)transportIds success:(void (^)(int))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)markAsSeenAsync;
- (RTObject<WFIAsyncAction>*)markAsSeenForTransportsAsync:(id<NSFastEnumeration> /* NSString * */)transportIds;
- (WACChatSearchReader*)getSearchReader:(WACChatQueryOptions*)value;
- (RTObject<WFIAsyncAction>*)saveMessageAsync:(WACChatMessage*)chatMessage;
- (void)tryCancelDownloadMessageAsync:(NSString *)localChatMessageId success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)tryCancelSendMessageAsync:(NSString *)localChatMessageId success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)getMessageBySyncIdAsync:(NSString *)syncId success:(void (^)(WACChatMessage*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACChatMessageStore_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageChangedEventArgs
#ifndef __WACChatMessageChangedEventArgs_DEFINED__
#define __WACChatMessageChangedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (WACChatMessageChangedDeferral*)getDeferral;
@end

#endif // __WACChatMessageChangedEventArgs_DEFINED__

// Windows.ApplicationModel.Chat.ChatConversation
#ifndef __WACChatConversation_DEFINED__
#define __WACChatConversation_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatConversation : RTObject <WACIChatItem>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * subject;
@property BOOL isConversationMuted;
@property (readonly) BOOL hasUnreadMessages;
@property (readonly) NSString * id;
@property (readonly) NSString * mostRecentMessageId;
@property (readonly) NSMutableArray* /* NSString * */ participants;
@property (readonly) WACChatConversationThreadingInfo* threadingInfo;
@property BOOL canModifyParticipants;
@property (readonly) WACChatItemKind itemKind;
- (EventRegistrationToken)addRemoteParticipantComposingChangedEvent:(void(^)(WACChatConversation*, WACRemoteParticipantComposingChangedEventArgs*))del;
- (void)removeRemoteParticipantComposingChangedEvent:(EventRegistrationToken)tok;
- (RTObject<WFIAsyncAction>*)deleteAsync;
- (WACChatMessageReader*)getMessageReader;
- (RTObject<WFIAsyncAction>*)markAllMessagesAsReadAsync;
- (RTObject<WFIAsyncAction>*)markMessagesAsReadAsync:(WFDateTime*)value;
- (RTObject<WFIAsyncAction>*)saveAsync;
- (void)notifyLocalParticipantComposing:(NSString *)transportId participantAddress:(NSString *)participantAddress isComposing:(BOOL)isComposing;
- (void)notifyRemoteParticipantComposing:(NSString *)transportId participantAddress:(NSString *)participantAddress isComposing:(BOOL)isComposing;
@end

#endif // __WACChatConversation_DEFINED__

// Windows.ApplicationModel.Chat.ChatConversationReader
#ifndef __WACChatConversationReader_DEFINED__
#define __WACChatConversationReader_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatConversationReader : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)readBatchAsyncWithSuccess:(void (^)(NSArray* /* WACChatConversation* */))success failure:(void (^)(NSError*))failure;
- (void)readBatchWithCountAsync:(int)count success:(void (^)(NSArray* /* WACChatConversation* */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACChatConversationReader_DEFINED__

// Windows.ApplicationModel.Chat.ChatQueryOptions
#ifndef __WACChatQueryOptions_DEFINED__
#define __WACChatQueryOptions_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatQueryOptions : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * searchString;
@end

#endif // __WACChatQueryOptions_DEFINED__

// Windows.ApplicationModel.Chat.ChatSearchReader
#ifndef __WACChatSearchReader_DEFINED__
#define __WACChatSearchReader_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatSearchReader : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)readBatchAsyncWithSuccess:(void (^)(NSArray* /* RTObject<WACIChatItem>* */))success failure:(void (^)(NSError*))failure;
- (void)readBatchWithCountAsync:(int)count success:(void (^)(NSArray* /* RTObject<WACIChatItem>* */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACChatSearchReader_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageStoreChangedEventArgs
#ifndef __WACChatMessageStoreChangedEventArgs_DEFINED__
#define __WACChatMessageStoreChangedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageStoreChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * id;
@property (readonly) WACChatStoreChangedEventKind kind;
@end

#endif // __WACChatMessageStoreChangedEventArgs_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageChangedDeferral
#ifndef __WACChatMessageChangedDeferral_DEFINED__
#define __WACChatMessageChangedDeferral_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageChangedDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)complete;
@end

#endif // __WACChatMessageChangedDeferral_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageTransport
#ifndef __WACChatMessageTransport_DEFINED__
#define __WACChatMessageTransport_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageTransport : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isActive;
@property (readonly) BOOL isAppSetAsNotificationProvider;
@property (readonly) NSString * transportFriendlyName;
@property (readonly) NSString * transportId;
@property (readonly) WACChatMessageTransportConfiguration* configuration;
@property (readonly) WACChatMessageTransportKind transportKind;
- (RTObject<WFIAsyncAction>*)requestSetAsNotificationProviderAsync;
@end

#endif // __WACChatMessageTransport_DEFINED__

// Windows.ApplicationModel.Chat.ChatSyncManager
#ifndef __WACChatSyncManager_DEFINED__
#define __WACChatSyncManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatSyncManager : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACChatSyncConfiguration* configuration;
- (RTObject<WFIAsyncAction>*)associateAccountAsync:(WSCWebAccount*)webAccount;
- (RTObject<WFIAsyncAction>*)unassociateAccountAsync;
- (BOOL)isAccountAssociated:(WSCWebAccount*)webAccount;
- (void)startSync;
- (RTObject<WFIAsyncAction>*)setConfigurationAsync:(WACChatSyncConfiguration*)configuration;
@end

#endif // __WACChatSyncManager_DEFINED__

// Windows.ApplicationModel.Chat.ChatCapabilities
#ifndef __WACChatCapabilities_DEFINED__
#define __WACChatCapabilities_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatCapabilities : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isChatCapable;
@property (readonly) BOOL isFileTransferCapable;
@property (readonly) BOOL isGeoLocationPushCapable;
@property (readonly) BOOL isIntegratedMessagingCapable;
@property (readonly) BOOL isOnline;
@end

#endif // __WACChatCapabilities_DEFINED__

// Windows.ApplicationModel.Chat.RemoteParticipantComposingChangedEventArgs
#ifndef __WACRemoteParticipantComposingChangedEventArgs_DEFINED__
#define __WACRemoteParticipantComposingChangedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRemoteParticipantComposingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isComposing;
@property (readonly) NSString * participantAddress;
@property (readonly) NSString * transportId;
@end

#endif // __WACRemoteParticipantComposingChangedEventArgs_DEFINED__

// Windows.ApplicationModel.Chat.ChatSyncConfiguration
#ifndef __WACChatSyncConfiguration_DEFINED__
#define __WACChatSyncConfiguration_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatSyncConfiguration : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WACChatRestoreHistorySpan restoreHistorySpan;
@property BOOL isSyncEnabled;
@end

#endif // __WACChatSyncConfiguration_DEFINED__

// Windows.ApplicationModel.Chat.RcsEndUserMessageManager
#ifndef __WACRcsEndUserMessageManager_DEFINED__
#define __WACRcsEndUserMessageManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsEndUserMessageManager : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addMessageAvailableChangedEvent:(void(^)(WACRcsEndUserMessageManager*, WACRcsEndUserMessageAvailableEventArgs*))del;
- (void)removeMessageAvailableChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WACRcsEndUserMessageManager_DEFINED__

// Windows.ApplicationModel.Chat.RcsTransport
#ifndef __WACRcsTransport_DEFINED__
#define __WACRcsTransport_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsTransport : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACRcsTransportConfiguration* configuration;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ extendedProperties;
@property (readonly) BOOL isActive;
@property (readonly) NSString * transportFriendlyName;
@property (readonly) NSString * transportId;
- (EventRegistrationToken)addServiceKindSupportedChangedEvent:(void(^)(WACRcsTransport*, WACRcsServiceKindSupportedChangedEventArgs*))del;
- (void)removeServiceKindSupportedChangedEvent:(EventRegistrationToken)tok;
- (BOOL)isStoreAndForwardEnabled:(WACRcsServiceKind)serviceKind;
- (BOOL)isServiceKindSupported:(WACRcsServiceKind)serviceKind;
@end

#endif // __WACRcsTransport_DEFINED__

// Windows.ApplicationModel.Chat.RcsTransportConfiguration
#ifndef __WACRcsTransportConfiguration_DEFINED__
#define __WACRcsTransportConfiguration_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsTransportConfiguration : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int maxAttachmentCount;
@property (readonly) int maxFileSizeInKilobytes;
@property (readonly) int maxGroupMessageSizeInKilobytes;
@property (readonly) int maxMessageSizeInKilobytes;
@property (readonly) int maxRecipientCount;
@property (readonly) int warningFileSizeInKilobytes;
@end

#endif // __WACRcsTransportConfiguration_DEFINED__

// Windows.ApplicationModel.Chat.RcsServiceKindSupportedChangedEventArgs
#ifndef __WACRcsServiceKindSupportedChangedEventArgs_DEFINED__
#define __WACRcsServiceKindSupportedChangedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsServiceKindSupportedChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACRcsServiceKind serviceKind;
@end

#endif // __WACRcsServiceKindSupportedChangedEventArgs_DEFINED__

// Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableEventArgs
#ifndef __WACRcsEndUserMessageAvailableEventArgs_DEFINED__
#define __WACRcsEndUserMessageAvailableEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsEndUserMessageAvailableEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isMessageAvailable;
@property (readonly) WACRcsEndUserMessage* message;
@end

#endif // __WACRcsEndUserMessageAvailableEventArgs_DEFINED__

// Windows.ApplicationModel.Chat.RcsEndUserMessageAction
#ifndef __WACRcsEndUserMessageAction_DEFINED__
#define __WACRcsEndUserMessageAction_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsEndUserMessageAction : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * label;
@end

#endif // __WACRcsEndUserMessageAction_DEFINED__

// Windows.ApplicationModel.Chat.RcsEndUserMessage
#ifndef __WACRcsEndUserMessage_DEFINED__
#define __WACRcsEndUserMessage_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsEndUserMessage : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WACRcsEndUserMessageAction* */ actions;
@property (readonly) BOOL isPinRequired;
@property (readonly) NSString * text;
@property (readonly) NSString * title;
@property (readonly) NSString * transportId;
- (RTObject<WFIAsyncAction>*)sendResponseAsync:(WACRcsEndUserMessageAction*)action;
- (RTObject<WFIAsyncAction>*)sendResponseWithPinAsync:(WACRcsEndUserMessageAction*)action pin:(NSString *)pin;
@end

#endif // __WACRcsEndUserMessage_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageManager
#ifndef __WACChatMessageManager_DEFINED__
#define __WACChatMessageManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageManager : RTObject
+ (void)getTransportsAsyncWithSuccess:(void (^)(NSArray* /* WACChatMessageTransport* */))success failure:(void (^)(NSError*))failure;
+ (void)requestStoreAsyncWithSuccess:(void (^)(WACChatMessageStore*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)showComposeSmsMessageAsync:(WACChatMessage*)message;
+ (void)showSmsSettings;
+ (void)registerTransportAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)getTransportAsync:(NSString *)transportId success:(void (^)(WACChatMessageTransport*))success failure:(void (^)(NSError*))failure;
+ (void)getTransportsAsyncWithSuccess:(void (^)(NSArray* /* WACChatMessageTransport* */))success failure:(void (^)(NSError*))failure;
+ (void)requestStoreAsyncWithSuccess:(void (^)(WACChatMessageStore*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)showComposeSmsMessageAsync:(WACChatMessage*)message;
+ (void)showSmsSettings;
+ (void)requestSyncManagerAsyncWithSuccess:(void (^)(WACChatSyncManager*))success failure:(void (^)(NSError*))failure;
+ (void)getTransportsAsyncWithSuccess:(void (^)(NSArray* /* WACChatMessageTransport* */))success failure:(void (^)(NSError*))failure;
+ (void)requestStoreAsyncWithSuccess:(void (^)(WACChatMessageStore*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)showComposeSmsMessageAsync:(WACChatMessage*)message;
+ (void)showSmsSettings;
@end

#endif // __WACChatMessageManager_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageNotificationTriggerDetails
#ifndef __WACChatMessageNotificationTriggerDetails_DEFINED__
#define __WACChatMessageNotificationTriggerDetails_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageNotificationTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WACChatMessage* chatMessage;
@property (readonly) BOOL shouldDisplayToast;
@property (readonly) BOOL shouldUpdateActionCenter;
@property (readonly) BOOL shouldUpdateBadge;
@property (readonly) BOOL shouldUpdateDetailText;
@end

#endif // __WACChatMessageNotificationTriggerDetails_DEFINED__

// Windows.ApplicationModel.Chat.ChatMessageBlocking
#ifndef __WACChatMessageBlocking_DEFINED__
#define __WACChatMessageBlocking_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatMessageBlocking : RTObject
+ (RTObject<WFIAsyncAction>*)markMessageAsBlockedAsync:(NSString *)localChatMessageId blocked:(BOOL)blocked;
@end

#endif // __WACChatMessageBlocking_DEFINED__

// Windows.ApplicationModel.Chat.ChatCapabilitiesManager
#ifndef __WACChatCapabilitiesManager_DEFINED__
#define __WACChatCapabilitiesManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACChatCapabilitiesManager : RTObject
+ (void)getCachedCapabilitiesAsync:(NSString *)address success:(void (^)(WACChatCapabilities*))success failure:(void (^)(NSError*))failure;
+ (void)getCapabilitiesFromNetworkAsync:(NSString *)address success:(void (^)(WACChatCapabilities*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACChatCapabilitiesManager_DEFINED__

// Windows.ApplicationModel.Chat.RcsManager
#ifndef __WACRcsManager_DEFINED__
#define __WACRcsManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsManager : RTObject
+ (WACRcsEndUserMessageManager*)getEndUserMessageManager;
+ (void)getTransportsAsyncWithSuccess:(void (^)(NSArray* /* WACRcsTransport* */))success failure:(void (^)(NSError*))failure;
+ (void)getTransportAsync:(NSString *)transportId success:(void (^)(WACRcsTransport*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)leaveConversationAsync:(WACChatConversation*)conversation;
@end

#endif // __WACRcsManager_DEFINED__

// Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableTriggerDetails
#ifndef __WACRcsEndUserMessageAvailableTriggerDetails_DEFINED__
#define __WACRcsEndUserMessageAvailableTriggerDetails_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCHATEXPORT
@interface WACRcsEndUserMessageAvailableTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * text;
@property (readonly) NSString * title;
@end

#endif // __WACRcsEndUserMessageAvailableTriggerDetails_DEFINED__


/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSMSMessage, NSString;

@interface CKSMSMessageDelivery : NSObject  {
    NSString *_text;
    int _group;
    int _associationID;
    CKSMSMessage *_message;
    unsigned int _isSending : 1;
}

@property CKSMSMessage * message;


- (id)message;
- (void)setMessage:(id)arg1;
- (float)progress;
- (BOOL)isSending;
- (void)_sentMessage:(struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; }*)arg1;
- (void)_errorSendingMessage:(struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; }*)arg1;
- (void)_finishedSendingMessages;
- (void)_notifyDelegatesOfMessageDelivery:(struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; }*)arg1 success:(BOOL)arg2;
- (struct { int x1; int x2; })_sendMessage:(struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; }*)arg1;
- (void)sendOutboundMessage:(struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; }*)arg1;
- (void)_fakeSendMessage:(struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; }*)arg1 afterDelay:(double)arg2;
- (void)redeliverPartiallyFailedMessage;
- (void)sendMessage;
- (id)init;
- (void)dealloc;

@end
/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, <DOMEventTarget>;

@interface DOMEvent : DOMObject  {
}

@property(copy,readonly) NSString * type;
@property(retain,readonly) <DOMEventTarget> * target;
@property(retain,readonly) <DOMEventTarget> * currentTarget;
@property(readonly) unsigned short eventPhase;
@property(readonly) BOOL bubbles;
@property(readonly) BOOL cancelable;
@property(readonly) unsigned long long timeStamp;
@property(retain,readonly) <DOMEventTarget> * srcElement;
@property BOOL returnValue;
@property BOOL cancelBubble;


- (void)finalize;
- (id)currentTarget;
- (unsigned short)eventPhase;
- (BOOL)bubbles;
- (BOOL)cancelable;
- (unsigned long long)timeStamp;
- (BOOL)defaultPrevented;
- (id)srcElement;
- (BOOL)returnValue;
- (BOOL)cancelBubble;
- (void)setCancelBubble:(BOOL)arg1;
- (void)stopPropagation;
- (void)preventDefault;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3;
- (void)stopImmediatePropagation;
- (void)setReturnValue:(BOOL)arg1;
- (id)type;
- (id)target;
- (void)dealloc;

@end
/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <WifiListenerDelegate>;

@interface GKWifiListener : NSObject  {
    struct __SCDynamicStore { } *_dynamicStore;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _storeMutex;
    <WifiListenerDelegate> *wifiListenerDelegate;
}

@property <WifiListenerDelegate> * wifiListenerDelegate;


- (BOOL)startChangeListener;
- (void)setWifiListenerDelegate:(id)arg1;
- (BOOL)hasWifiConnection;
- (id)wifiListenerDelegate;
- (BOOL)stopChangeListener;
- (id)init;
- (void)dealloc;

@end

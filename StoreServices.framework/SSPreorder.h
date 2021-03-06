/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSItemImageCollection, NSString, NSDate, NSNumber;

@interface SSPreorder : NSObject <SSXPCCoding> {
    NSNumber *_accountID;
    NSString *_artistName;
    SSItemImageCollection *_imageCollection;
    unsigned long long _itemID;
    NSString *_itemKind;
    double _releaseDate;
    NSString *_releaseDateString;
    long long _pid;
    unsigned long long _preorderID;
    NSString *_title;
}

@property(readonly) NSString * artistName;
@property(readonly) SSItemImageCollection * imageCollection;
@property(readonly) NSString * itemKind;
@property(readonly) long long persistentIdentifier;
@property(readonly) NSDate * releaseDate;
@property(readonly) NSString * releaseDateString;
@property(readonly) NSNumber * storeAccountIdentifier;
@property(readonly) unsigned long long storeItemIdentifier;
@property(readonly) unsigned long long storePreorderIdentifier;
@property(readonly) NSString * title;


- (id)artistName;
- (id)storeAccountIdentifier;
- (void)_setStorePreorderIdentifier:(long long)arg1;
- (void)_setStoreItemIdentifier:(long long)arg1;
- (void)_setStoreAccountIdentifier:(id)arg1;
- (void)_setReleaseDateString:(id)arg1;
- (void)_setReleaseDate:(id)arg1;
- (void)_setItemKind:(id)arg1;
- (void)_setImageCollection:(id)arg1;
- (void)_setArtistName:(id)arg1;
- (id)releaseDateString;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (long long)persistentIdentifier;
- (id)itemKind;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (unsigned long long)storePreorderIdentifier;
- (id)imageCollection;
- (id)copyReleaseDateStringWithStyle:(long)arg1;
- (id)releaseDate;
- (unsigned long long)storeItemIdentifier;
- (void)_setTitle:(id)arg1;

@end

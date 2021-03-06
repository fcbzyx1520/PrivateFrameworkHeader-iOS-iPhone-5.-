/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDPlaceholder, PDAnimationInfo, OADImageRecolorInfo;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    BOOL mIsComment;
    PDAnimationInfo *mAnimationInfo;
    BOOL mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property int inheritedTextStylePlaceholderType;


- (void)setImageRecolorInfo:(id)arg1;
- (BOOL)hasPlaceholder;
- (BOOL)isComment;
- (void)setIsComment:(BOOL)arg1;
- (BOOL)hasAnimationInfo;
- (void)setAnimationInfo:(id)arg1;
- (id)animationInfo;
- (BOOL)hasOleChart;
- (void)setHasOleChart:(BOOL)arg1;
- (int)inheritedTextStylePlaceholderType;
- (void)setInheritedTextStylePlaceholderType:(int)arg1;
- (id)imageRecolorInfo;
- (BOOL)hasBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (id)init;
- (void)dealloc;

@end

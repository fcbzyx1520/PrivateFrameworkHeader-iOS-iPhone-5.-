/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetFormats : NSObject  {
}

+ (BOOL)isAlbumVideoPath:(id)arg1;
+ (BOOL)formatWasSynced:(int)arg1;
+ (BOOL)formatHasJPEGFile:(int)arg1;
+ (BOOL)transformForImage:(struct CGImage { }*)arg1 captureOrientation:(int)arg2 format:(int)arg3 sizeInOut:(struct CGSize { float x1; float x2; }*)arg4 contextSizeOut:(struct CGSize { float x1; float x2; }*)arg5 transformOut:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg6;
+ (BOOL)formatIsCropped:(int)arg1;
+ (struct CGSize { float x1; float x2; })sizeForFormat:(int)arg1;


@end

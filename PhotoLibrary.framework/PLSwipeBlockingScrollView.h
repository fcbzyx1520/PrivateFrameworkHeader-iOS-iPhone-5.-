/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PLSwipeBlockingScrollView : UIPageControllerScrollView  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id gestureShouldBeginHandler;

}

@property(copy) id gestureShouldBeginHandler;


- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (double)_touchDelayForScrollDetection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)gestureShouldBeginHandler;
- (void)setGestureShouldBeginHandler:(id)arg1;
- (void)dealloc;

@end

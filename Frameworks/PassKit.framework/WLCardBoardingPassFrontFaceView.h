/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIImageView;

@interface WLCardBoardingPassFrontFaceView : WLCardFrontFaceView  {
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}


- (id)cardFaceTemplate;
- (id)_transitGlyphForTransitType:(int)arg1 scrunched:(BOOL)arg2;
- (void)createBodyContentViews;
- (void)dealloc;
- (void)layoutSubviews;

@end
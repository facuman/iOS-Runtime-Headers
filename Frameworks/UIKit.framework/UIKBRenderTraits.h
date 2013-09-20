/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBRenderTraits, UIKBTextStyle;

@interface UIKBRenderTraits : NSObject <NSCopying> {
    UIKBGradient *_backgroundGradient;
    BOOL _controlOpacities;
    UIKBTextStyle *_fallbackSymbolStyle;
    float _forceOpacity;
    UIKBRenderGeometry *_geometry;
    NSString *_hashString;
    UIKBRenderTraits *_highlightedVariantTraits;
    BOOL _honorControlOpacity;
    UIKBGradient *_layeredBackgroundGradient;
    UIKBGradient *_layeredForegroundGradient;
    NSMutableArray *_renderEffects;
    UIKBTextStyle *_secondarySymbolStyle;
    UIKBTextStyle *_symbolStyle;
    NSArray *_variantGeometries;
    UIKBRenderTraits *_variantTraits;
}

@property(retain) UIKBGradient * backgroundGradient;
@property BOOL controlOpacities;
@property(retain) UIKBTextStyle * fallbackSymbolStyle;
@property float forceOpacity;
@property(retain) UIKBRenderGeometry * geometry;
@property(retain) NSString * hashString;
@property(retain) UIKBRenderTraits * highlightedVariantTraits;
@property(retain) UIKBGradient * layeredBackgroundGradient;
@property(retain) UIKBGradient * layeredForegroundGradient;
@property(readonly) NSArray * renderEffects;
@property(retain) UIKBTextStyle * secondarySymbolStyle;
@property(retain) UIKBTextStyle * symbolStyle;
@property(retain) NSArray * variantGeometries;
@property(retain) UIKBRenderTraits * variantTraits;

+ (id)emptyTraits;
+ (id)traitsWithGeometry:(id)arg1;
+ (id)traitsWithSymbolStyle:(id)arg1;

- (void)addRenderEffect:(id)arg1;
- (id)backgroundGradient;
- (BOOL)controlOpacities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fallbackSymbolStyle;
- (float)forceOpacity;
- (id)geometry;
- (id)hashString;
- (id)highlightedVariantTraits;
- (id)layeredBackgroundGradient;
- (id)layeredForegroundGradient;
- (void)modifyForMasking;
- (void)overlayWithTraits:(id)arg1;
- (void)removeAllRenderEffects;
- (id)renderEffects;
- (id)secondarySymbolStyle;
- (void)setBackgroundGradient:(id)arg1;
- (void)setControlOpacities:(BOOL)arg1;
- (void)setFallbackSymbolStyle:(id)arg1;
- (void)setForceOpacity:(float)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHashString:(id)arg1;
- (void)setHighlightedVariantTraits:(id)arg1;
- (void)setLayeredBackgroundGradient:(id)arg1;
- (void)setLayeredForegroundGradient:(id)arg1;
- (void)setSecondarySymbolStyle:(id)arg1;
- (void)setSymbolStyle:(id)arg1;
- (void)setVariantGeometries:(id)arg1;
- (void)setVariantTraits:(id)arg1;
- (id)symbolStyle;
- (id)variantGeometries;
- (id)variantTraits;

@end
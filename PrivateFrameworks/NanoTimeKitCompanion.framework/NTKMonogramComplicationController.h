/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel> {
    NSString * _monogramText;
}

@property (nonatomic, readonly) <NTKMonogramComplicationDisplay> *legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleCustomMonogramChanged;
- (void)_handleFaceDefaultsChanged;
- (void)_handleLocaleChange;
- (void)_reloadMonogramText;
- (void)_updateDisplay;
- (BOOL)hasTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */



@interface PreferencesTextTableCell : PreferencesTableCell <UITextViewDelegate, UITextFieldDelegate>
{
    id _delegate;
    BOOL _forceFirstResponder;
}

+ (void)_initializeSafeCategory;

- (void)setCellEnabled:(BOOL)arg1;
- (void)setPlaceholderText:(id)arg1;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (id)textField;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isEditing;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)_accessibilityTextViewTextOperationResponder;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;

@end
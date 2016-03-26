/**
 * The `HBAppearanceSettings` class in `CepheiPrefs` provides a model object
 * read by other components of Cephei to determine colors to use in the user
 * interface.
 *
 * Appearance settings are typically set on a view controller, via the
 * -[PSListController+HBTintAdditions hb_appearanceSettings] method. This is
 * automatically managed by Cephei and provided to view controllers as they are
 * pushed onto the stack.
 *
 * This interface replaces the previous method that worked in the opposite way –
 * HBListController would work backwards to find a view controller with
 * appearance settings defined. This was not robust, created messy code within
 * Cephei, and can cause a mix of colors if a view controller with different
 * settings to the prior one is pushed.
 *
 * Use of the old properties on HBListController will cause a warning to be
 * logged.
 */

@interface HBAppearanceSettings : NSObject

/**
 * @name General
 */

/**
 * The tint color to use for interactable elements within the list controller.
 * Override this method to return a UIColor to use.
 *
 * A nil value will cause no modification of the tint to occur.
 *
 * @returns By default, nil.
 */
@property (nonatomic, copy, nullable) UIColor *tintColor;

/**
 * @name Navigation Bar
 */

/**
 * The tint color to use for the navigation bar buttons, or, if
 * hb_invertedNavigationBar is set, the background of the navigation bar.
 * Override this method to return a UIColor to use, if you don’t want to use the
 * same color as hb_tintColor.
 *
 * A nil value will cause no modification of the navigation bar tint to occur.
 *
 * @returns By default, the return value of hb_tintColor.
 */
@property (nonatomic, copy, nullable) UIColor *navigationBarTintColor;

/**
 * Whether to use an inverted navigation bar. Override this method if you want
 * this behavior.
 *
 * An inverted navigation bar has a tinted background, rather than the buttons
 * being tinted. All other interface elements will be tinted the same.
 *
 * @returns By default, NO.
 */
@property (nonatomic, assign) BOOL invertedNavigationBar;

/**
 * Whether to use a translucent navigation bar. Override this method if you want
 * this behavior.
 *
 * @returns By default, YES.
 */

@property (nonatomic, assign) BOOL translucentNavigationBar;

/**
 * @name Table View
 */

/**
 * The color to be used for the overall background of the table view.
 * Override this method to return a UIColor to use.
 *
 * @returns By default, nil.
 */
@property (nonatomic, copy, nullable) UIColor *tableViewBackgroundColor;

/**
 * The color to be used for the text color of table view cells.
 * Override this method to return a UIColor to use.
 *
 * @returns By default, nil.
 */
@property (nonatomic, copy, nullable) UIColor *tableViewCellTextColor;

/**
 * The color to be used for the background color of table view cells.
 * Override this method to return a UIColor to use.
 *
 * @returns By default, nil.
 */
@property (nonatomic, copy, nullable) UIColor *tableViewCellBackgroundColor;

/**
 * The color to be used for the separator between table view cells.
 * Override this method to return a UIColor to use.
 *
 * @returns By default, nil.
 */
@property (nonatomic, copy, nullable) UIColor *tableViewCellSeparatorColor;

/**
 * The color to be used when a table view cell is selected.
 * This color will be shown when the cell is in the 'highlighted' state.
 *
 * Override this method to return a UIColor to use.
 *
 * @returns By default, nil.
 */
@property (nonatomic, copy, nullable) UIColor *tableViewCellSelectionColor;

@end
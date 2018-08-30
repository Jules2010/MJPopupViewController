//
//  UIViewController+MJPopupViewController.h
//  MJModalViewController
//
//  Created by Martin Juhasz on 11.05.12.
//  Copyright (c) 2012 martinjuhasz.de. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MJPopupBackgroundView;

typedef enum
{
    MJPopupViewAnimationFade = 0,
    MJPopupViewAnimationSlideBottomTop = 1,
    MJPopupViewAnimationSlideBottomBottom,
    MJPopupViewAnimationSlideTopTop,
    MJPopupViewAnimationSlideTopBottom,
    MJPopupViewAnimationSlideLeftLeft,
    MJPopupViewAnimationSlideLeftRight,
    MJPopupViewAnimationSlideRightLeft,
    MJPopupViewAnimationSlideRightRight,
    MJPopupViewAnimationSlideBounce,
} MJPopupViewAnimation;

@interface UIViewController (MJPopupViewController)

@property (nonatomic, retain) UIViewController *mj_popupViewController;
@property (nonatomic, retain) MJPopupBackgroundView *mj_popupBackgroundView;
@property (nonatomic, retain) UIImage *mj_BackgroundSource;

- (void)presentPopupViewController:(UIViewController*)popupViewController backgroundSource:(UIImage*)backgroundSource animationType:(MJPopupViewAnimation)animationType;

- (void)presentPopupViewController:(UIViewController*)popupViewController backgroundSource:(UIImage*)backgroundSource animationType:(MJPopupViewAnimation)animationType dismissed:(void(^)(void))dismissed;

- (void)dismissPopupViewControllerWithanimationType:(MJPopupViewAnimation)animationType;

- (void)setNewPopupSize:(CGSize)size; // JM ADDED 2016/11/27

@end

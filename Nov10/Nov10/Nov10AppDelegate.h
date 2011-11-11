//
//  Nov10AppDelegate.h
//  Nov10
//
//  Created by Katya Issaeva on 11/8/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BigView;

@interface Nov10AppDelegate: UIResponder <UIApplicationDelegate> {
	BigView *bigView;
	UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end

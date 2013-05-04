//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#import "___FILEBASENAME___.h"

@implementation ___FILEBASENAMEASIDENTIFIER___

#pragma mark - Singleton
+ (___FILEBASENAMEASIDENTIFIER___ *)sharedInstance {
    static dispatch_once_t _onceToken;
    static ___FILEBASENAMEASIDENTIFIER___  *_sharedInstance;

    dispatch_once(&_onceToken, ^{
        _sharedInstance = [[self alloc] init];
    });

    return _sharedInstance;
}

@end

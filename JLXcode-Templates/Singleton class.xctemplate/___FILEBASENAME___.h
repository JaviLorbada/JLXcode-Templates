//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

@interface ___FILEBASENAMEASIDENTIFIER___ : NSObject

#pragma mark - Singleton
+ (___FILEBASENAMEASIDENTIFIER___ *)sharedInstance;
 
// Clue for improper use (produces compile time error)
+(___FILEBASENAMEASIDENTIFIER___ *) alloc __attribute__((unavailable("alloc not available, call sharedInstance instead")));
-(___FILEBASENAMEASIDENTIFIER___ *) init  __attribute__((unavailable("init not available, call sharedInstance instead")));
+(___FILEBASENAMEASIDENTIFIER___ *) new   __attribute__((unavailable("new not available, call sharedInstance instead")));

@end

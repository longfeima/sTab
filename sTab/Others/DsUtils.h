//
//  DsUtils.h
//  DDService
//
//  Created by Seven on 2017/7/12.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DsUtils : NSObject


+ (void)write2UserDefaults:(id)value forKey:(NSString *)key;
+ (id)fetchFromUserDefaultsWithKey:(NSString *)key;
+ (void)removeUserDefaultsWithKey:(NSString *)key;






+ (NSString *)macString;
+ (NSString *)idfvString;
+ (NSString *)idfaString;


+ (NSString *)getUUID;


+ (NSString *)loginPasswordMD5Encrypt:(NSString *)loginPassword;
+ (NSString *)tradePasswordMD5Encrypt:(NSString *)tradePassword;

@end

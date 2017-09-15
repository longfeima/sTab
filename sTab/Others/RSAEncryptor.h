//
//  RSAEncryptor.h
//  RSADemo
//
//  Created by fenglongteng on 16/5/24.
//  Copyright © 2016年 fenglongteng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSAEncryptor : NSObject
#pragma mark - Instance Methods

-(void) loadPublicKeyFromFile: (NSString*) derFilePath;
-(void) loadPublicKeyFromData: (NSData*) derData;

-(void) loadPrivateKeyFromFile: (NSString*) p12FilePath password:(NSString*)p12Password;
-(void) loadPrivateKeyFromData: (NSData*) p12Data password:(NSString*)p12Password;




-(NSString*) rsaEncryptString:(NSString*)string;
-(NSData*) rsaEncryptData:(NSData*)data ;


#pragma mark - Class Methods

+(void) setSharedInstance: (RSAEncryptor*)instance;
+(RSAEncryptor*) sharedInstance;
@end

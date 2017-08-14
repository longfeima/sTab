//
//  DDGlobalConstant.h
//  DDSC
//
//  Created by dxw on 14/11/27.
//  Copyright (c) 2014年 ddsoucai. All rights reserved.
//

#ifndef DDSC_DDGlobalConstant_h
#define DDSC_DDGlobalConstant_h

#define fequalzero(a) (fabs(a) < FLT_EPSILON)

#define DDBoolValue(strValue) (strValue) ? [strValue intValue] : (-1)

#define DDHandleBlock(block, ...)         if(block) { block(__VA_ARGS__); }


#define DDBundleVersion                   [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4 (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#define kDDIPhone5                    IS_IPHONE_5
#define kDDIPhone4                    IS_IPHONE_4
#define IOS_LATEST8                     [UIDevice currentDevice].systemVersion.floatValue >= 8.0
#define IOS_LATEST7                     [UIDevice currentDevice].systemVersion.floatValue >= 7.0
#define IOS_LATEST9                     [UIDevice currentDevice].systemVersion.floatValue >= 9.0

#define KWidthScale6AND5                (375.0 / 320.0)
#define DDAPPSCALE                      [[UIScreen mainScreen] bounds].size.width / 375.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define DDAPPChannel                      @"App Store"



#define kDDUserPhoneInputChar             @"0123456789"
#define kDDUserCardInputChar              @"0123456789Xx"


#define kDDGuestPwd(uid)                [NSString stringWithFormat:@"guess%@", uid]       //手势密码标识 值为用户电话 前面加guess以区分
#define kDDGuestCountKey(uid)           [NSString stringWithFormat:@"guesscount%@", uid]             // 手势密码解锁次数Tip
#define kDDGuestMaxCount                5                   // 手势密码解锁剩余次数
#define kDDGuestMinLength               4                   // 手势密码最低长度

#define kDDFingerprint(uid)             [NSString stringWithFormat:@"fingerprint%@", uid]     //指纹密码

#define kDDEnterBackground              @"enterBackground"

///↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓///

#define DS_APP_DELEGATE                     ((AppDelegate *)[UIApplication sharedApplication].delegate)



//tabBarColor
#define DS_TABBAR_NORMAL                    DS_COLOR_HEXCOLOR(@"ffffff")
#define DS_TABBAR_NIGHT                     [DS_COLOR_HEXCOLOR(@"000000") colorWithAlphaComponent:0.2]
//backgroundColor
#define DS_BACKGROUNDCOLOR_NORMAL          DS_COLOR_HEXCOLOR(@"ffffff")
#define DS_BACKGROUNDCOLOR_NIGHT           [DS_COLOR_HEXCOLOR(@"000000") colorWithAlphaComponent:0.2]
//textColor
#define DS_TEXTCOLOR_NORMAL                 DS_COLOR_HEXCOLOR(@"9b2a4c")
#define DS_TEXTCOLOR_NIGHT                  DS_COLOR_HEXCOLOR(@"bbbbbb")

//global && normal->night
#define DS_GLOBAL_ISNIGHT                   @"DS_GLOBAL_ISNIGHT"
#define DS_GLOBAL_TABBARCOLOR               [[DsUtils fetchFromUserDefaultsWithKey:DS_GLOBAL_ISNIGHT] boolValue] ? DS_TABBAR_NIGHT : DS_TABBAR_NORMAL
#define DS_GLOBAL_BACKGROUNDCOLOR           [[DsUtils fetchFromUserDefaultsWithKey:DS_GLOBAL_ISNIGHT] boolValue] ? DS_BACKGROUNDCOLOR_NIGHT : DS_BACKGROUNDCOLOR_NORMAL
#define DS_GLOBAL_TEXTCOLOR                 [[DsUtils fetchFromUserDefaultsWithKey:DS_GLOBAL_ISNIGHT] boolValue] ? DS_TEXTCOLOR_NIGHT : DS_TEXTCOLOR_NORMAL



#define DS_APP_SIZE                             [[UIScreen mainScreen] bounds].size
#define DS_APP_WIDTH                            DS_APP_SIZE.width
#define DS_APP_HEIGHT                           DS_APP_SIZE.height



#define DS_APP_FONT(fontSize)               [UIFont fontWithName:@"Helvetica" size:fontSize ]
#define DS_APP_BOLDFONT(fontSize)           [UIFont fontWithName:@"Helvetica-Bold" size:fontSize ]
#define DS_APPLIGHTFONT(fontSize)          [UIFont fontWithName:@"Helvetica-Light" size:fontSize ]


#define DS_COLOR_BACKGROUND                DS_COLOR_HEXCOLOR(@"0xf0f0f0")
#define DS_COLOR_RANDOM                    DS_COLOR_RGBA(arc4random()%254, arc4random()%254, arc4random()%254, 0.5)


#define DS_COLOR_HEXCOLOR(hexStr)             [UIColor dd_colorWithHexString:hexStr]
#define DS_COLOR_RGBA(_r, _g, _b, _a)       [UIColor colorWithRed:_r/255.f green:_g/255.f blue:_b/255.f alpha:_a]

#define DS_COLOR_RGB(_r, _g, _b)    DS_COLOR_RGBA(_r, _g, _b, 1)




#define NOTI_APP_TABBARCHANGECOLOR                        @"NOTI_APP_TABBARCHANGECOLOR"             // app重新登陆



#define PUSH_APPKEY                             @"16f580fe728c75bab64ee8e0"
#define PUSH_CHANNEL                             @"App Store"
#define PUSH_ISDISTRIBUTE                       @(FALSE)                            //是否是发布版本，上线需要修改为TRUE










///↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑///


//////////////////////////////////////////////////////






//////////////////////////////////////////////////

#define kDDUMAppKey                   @"5461b77efd98c5b24f00062c"
#define kDDPacketName                 @"ddsoucai"
////////////////////////////////////////////////////////

/////////////////////////////////////////////////

#define kDDWXAppKey                   @"wx449343cfdd5c1bf8"

#define kDDTencentKey                 @"1103598557"

#define kDDAppKey                     @"3511254898"
#define kDDAppSecret                  @"055ac073dce39ccbda9be85582e6b43a"
#define kAppRedirectURI               @"http://www.ddsoucai.cn"

#define kDDPHONE                      [DDGlobalModel shareModel].telNumber ?: @"400-990-8811"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define NOTI_USER_LOGIN                         @"NOTI_USER_LOGIN"
#define NOTI_USER_LOGOUT                        @"NOTI_USER_LOGOUT"
#define NOTI_ACCOUNT_CHANGE_SUCCESS             @"NOTI_ACCOUNT_CHANGE_SUCCESS"

#define NOTI_ENTER_FOREGROUND                   @"NOTI_ENTER_FOREGROUND"

#define NOTI_UPDATE_MESSAGE                     @"NOTI_UPDATE_MESSAGE"
#define NOTI_COUNTDOWN_OVER                     @"NOTI_COUNTDOWN_OVER"

#define NOTI_APP_ITEMS_JUMP                     @"NOTI_APP_ITEMS_JUMP"  // app内通知跳转

#define NOTI_WEB_SHARE                          @"NOTI_WEB_SHARE"
#define NOTI_WEB_LOGIN                          @"NOTI_WEB_LOGIN"
#define NOTI_WEB_INVITE                         @"NOTI_WEB_INVITE"
#define NOTI_WEB_JUMP_ITEM                      @"NOTI_WEB_JUMP_ITEM"   // web通知跳转
#define NOTI_WEB_ALERT                          @"NOTI_WEB_ALERT"       // web alert
#define NOTI_WEB_TOAST                          @"NOTI_WEB_TOAST"
#define NOTI_WEB_ENCRY                          @"NOTI_WEB_ENCRY"
#define NOTI_WEB_SHOW_INVITE                    @"NOTI_WEB_SHOW_INVITE"
#define NOTI_WEB_STATIS                         @"NOTI_WEB_STATIS"      // web打点转发
#define NOTI_WEB_TAB_CHANGE                     @"NOTI_WEB_TAB_CHANGE"
#define NOTI_WEB_BIND_CARD                      @"NOTI_WEB_BIND_CARD"
#define NOTI_WEB_BACK_REFRESH                   @"NOTI_WEB_BACK_REFRESH"
#define NOTI_WEB_PRODUCT_ITEM                   @"NOTI_WEB_PRODUCT_ITEM"  // 调产品详情
#define NOTI_WEB_REGISTER                       @"NOTI_WEB_REGISTER"      // 注册
#define NOTI_WEB_LOADING                        @"NOTI_WEB_LOADING"       // 菊花
#define NOTI_WEB_PROXY                          @"NOTI_WEB_PROXY"         // 代理转发

#define NOTI_WEB_ISLOGIN                        @"NOTI_WEB_ISLOGIN"       // 是否登陆
#define NOTI_WEB_USER_INFO                      @"NOTI_WEB_USER_INFO"     // 用户AES(userinfo+时间戳)
#define NOTI_WEB_APP_INFO                       @"NOTI_WEB_APP_INFO"      // app相关信息
#define NOTI_WEB_RIGHT_TEXT                      @"NOTI_WEB_RIGHT_TEXT"
#define NOTI_APP_SHARE_RESULT                   @"NOTI_APP_SHARE_RESULT"
#define NOTI_PUSH_MESSAGE                       @"NOTI_PUSH_MESSAGE"            // app推送打开消息列表

#define NOTI_APP_PUSH_MESSAGE                   @"NOTI_APP_PUSH_MESSAGE"        // 解锁后继续推送动作

#define NOTI_APP_SET_TRADE_PASSWORD             @"NOTI_APP_SET_TRADE_PASSWORD"  // 设置交易密码后
#define NOTI_APP_BIND_BANK                      @"NOTI_APP_BIND_BANK"           // 独立绑卡或者换卡成功

#define NOTI_APP_PAY_SHARE_START                @"NOTI_APP_PAY_SHARE_START"


#define NOTI_RECOMMEND_ALEAR_SHOW                    @"NOTI_RECOMMEND_ALEAR_SHOW"          // Recommend 升级弹框 提示
#define NOTI_RECOMMEND_ALEAR_HIDE                    @"NOTI_RECOMMEND_ALEAR_HIDE"          // Recommend 升级弹框 提示
#define NOTI_UPDATE_REQUEST_OVER                     @"dd_update_request_over"             // 升级请求结束

#define NOTI_OPEN_WEIXIN                             @"NOTI_OPEN_WEIXIN"           //打开微信
#define NOTI_OPEN_QQ                                 @"NOTI_OPEN_QQ"               //打开QQ
#define NOTI_GOTO_BROWSER                            @"NOTI_GOTO_BROWSER"          //财券
#define NOTI_HIDE_ASSET                              @"NOTI_HIDE_ASSET"            //隐藏资产

#define NOTI_GET_USER_INFO                           @"NOTI_GET_USER_INFO"         //获得用户个人信息
#define NOTI_GET_USER_ACCOUNT_INFO_SUCCESSS          @"GET_USER_ACCOUNT_INFO_SUCCESSS"   //获取账户信息成功
#define NOTI_CHANGE_TEL_NUMBER                       @"NOTI_CHANGE_TEL_NUMBER"           //更改客服电话
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define NOTI_PLUGIN_NAV                         @"NOTI_PLUGIN_NAV"          // 插件Nav
#define NOTI_PLUGIN_REFRESH                     @"NOTI_PLUGIN_REFRESH"      // 刷新

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define USER_LOGIN_STATUS_MASK                  @"5483845464703011145%d01642089386"
#define kDDAESWebKey                            @"59fc6b541dd0e0a6"
#define kDDAESWebPluginKey                      @"85144fb54529225f"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define UD_KEY_PHONE                    @"key1"
#define UD_KEY_PASSWORD                 @"key2"
#define UD_KEY_UID                      @"key3"
#define UD_KEY_DYNAMICPWD               @"key4"
#define UD_KEY_LOGIN_STATUS             @"key5"
#define UD_FIRST_START                  @"firstStartWithVersion"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - 3.1.7（预留打点）
//#define PRODUCT_ID                                  [[NSUserDefaults standardUserDefaults] objectForKey:@"PRODUCT_ID"]
//#define PRODUCT_CHANNEL                             [[NSUserDefaults standardUserDefaults] objectForKey:@"PRODUCT_CHANNEL"]
//#define PRODUCT_SET_ID(productID)                   [[NSUserDefaults standardUserDefaults] setObject:productID forKey:@"PRODUCT_ID"]
//#define PRODUCT_SET_CHANNEL(productChannel)         [[NSUserDefaults standardUserDefaults] setObject:productChannel forKey:@"PRODUCT_CHANNEL"]

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//点击相应的tabBar
#define NOTI_TAP_RECCOMEND                     @"tapRecommend"
#define NOTI_TAP_PRODUCT                       @"tapProduct"
#define NOTI_TAP_MY_ACCOUNT                    @"tapMyAccount"
#define NOTI_TAP_DISCOVER                      @"tapDiscover"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define USER_ACCOUNT_INFO_FILE_NAME           @"personalAccountInfoFile"          //账户信息存储文件名
#define USER_ACCOUNT_INFO_KEY                 @"personalAccountInfoKey"           //账户信息存储key

#define USER_CUSTOMER_INFO_FILE_NAME      @"customerInfoFile"     //个人信息存储文件名
#define USER_CUSTOMER_INFO_KEY            @"customerInfoKey"      //个人信息存储key

#define USER_COOKIE_KEY                  @"userCookieKey"        //用户cookie
#define REVERFICATION_TIME               60                   //验证码时间


#define SYSTEM_CONFIG_CACHE_FILE_NAME    @"systemDataCacheFile"  //公共接口数据缓存文件名
#define SYSTEM_CONFIG_CACHE_KEY          @"SystemDataCacheKey"   //公共接口数据缓存key

//////////////////////////////////////////////////////////////////////////////////////////////版本跌掉需要修改
#define DD_CHANGE_CERTIFICATE_VER        @"v3.0.1"



#endif

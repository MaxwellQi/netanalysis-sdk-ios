//
//  UCNetworkService.h
//  UCNetDiagnosisDemo
//
//  Created by ethan on 13/08/2018.
//  Copyright © 2018 ucloud. All rights reserved.
//

#import <Foundation/Foundation.h>

/************************ define Network request *************************/
typedef enum UNetHTTPRequestParamType
{
    UNetHTTPRequestParamType_JSON = 0,
    UNetHTTPRequestParamType_KEYVALUE,
    UNetHTTPRequestParamType_XML,
    UNetHTTPRequestParamType_URLENCODED,
    UNetHTTPRequestParamType_MULTIPARTFORM
}UNetHTTPRequestParamType;

typedef  void(^UNetHttpResponseHandler) (NSData *_Nullable data, NSError *_Nullable error);

@interface UCNetworkService : NSObject

+ (void)uHttpGetRequestWithUrl:(NSString *)urlstr functionModule:(NSString *)module  timeout:(NSTimeInterval)timeValue completionHandler:(UNetHttpResponseHandler)handler;

+ (void)uHttpPostRequestWithUrl:(NSString *)urlstr param:(NSString *)paramStr paramType:(UNetHTTPRequestParamType)paramType functionModule:(NSString *)module timeout:(NSTimeInterval)timeValue completionHandler:(UNetHttpResponseHandler)handler;
@end

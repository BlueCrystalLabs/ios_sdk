//
//  ADJDeviceInfo.h
//  adjust
//
//  Created by Pedro Filipe on 17/10/14.
//  Copyright (c) 2014 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADJUserAgent.h"

@interface ADJDeviceInfo : NSObject<NSCopying>

@property (nonatomic, copy) NSString *macSha1;
@property (nonatomic, copy) NSString *macShortMd5;
@property (nonatomic, copy) NSString *idForAdvertisers;
@property (nonatomic, copy) NSString *fbAttributionId;
@property (nonatomic, assign) BOOL trackingEnabled;
@property (nonatomic, copy) NSString *vendorId;
@property (nonatomic, copy) NSString *pushToken;
@property (nonatomic, copy) NSString *clientSdk;
@property (nonatomic, copy) ADJUserAgent *userAgent;

@end

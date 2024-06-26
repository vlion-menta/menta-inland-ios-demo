//
//  MVYYModel.h
//  MVYYModel <https://github.com/ibireme/MVYYModel>
//
//  Created by ibireme on 15/5/10.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<MentaVlionBaseSDK/MVYYModel.h>)
FOUNDATION_EXPORT double MVYYModelVersionNumber;
FOUNDATION_EXPORT const unsigned char MVYYModelVersionString[];
#import <MentaVlionBaseSDK/NSObject+MVYYModel.h>
#import <MentaVlionBaseSDK/MVYYClassInfo.h>
#else
#import "NSObject+MVYYModel.h"
#import "MVYYClassInfo.h"
#endif

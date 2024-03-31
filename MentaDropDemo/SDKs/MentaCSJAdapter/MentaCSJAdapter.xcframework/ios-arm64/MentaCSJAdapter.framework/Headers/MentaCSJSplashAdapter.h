//
//  MentaCSJSplashAdapter.h
//  Pods
//
//  Created by iMacMe on 2024/3/28.
//

#import <Foundation/Foundation.h>
#import <MentaUnifiedSDK/MentaUnifiedSplashAdDelegate.h>
NS_ASSUME_NONNULL_BEGIN

@interface MentaCSJSplashAdapter : NSObject
@property (nonatomic, weak) id<MentaUnifiedSplashAdDelegate> delegate;
@end

NS_ASSUME_NONNULL_END

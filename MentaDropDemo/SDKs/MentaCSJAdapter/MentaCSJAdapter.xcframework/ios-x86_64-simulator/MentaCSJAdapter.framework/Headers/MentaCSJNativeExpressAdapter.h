//
//  MentaCSJNativeExpressAdapter.h
//  Pods
//
//  Created by iMacMe on 2024/3/28.
//

#import <Foundation/Foundation.h>
#import <MentaUnifiedSDK/MentaUnifiedNativeExpressAdDelegate.h>
NS_ASSUME_NONNULL_BEGIN

@interface MentaCSJNativeExpressAdapter : NSObject
@property (nonatomic, weak) id<MentaUnifiedNativeExpressAdDelegate> delegate;

@end

NS_ASSUME_NONNULL_END

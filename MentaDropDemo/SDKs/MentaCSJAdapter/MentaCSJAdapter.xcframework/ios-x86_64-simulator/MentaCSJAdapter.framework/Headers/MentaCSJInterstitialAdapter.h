//
//  MentaCSJInterstitialAdapter.h
//  Pods
//
//  Created by iMacMe on 2024/3/28.
//

#import <Foundation/Foundation.h>
#import <MentaUnifiedSDK/MentaUnifiedInterstitialAdDelegate.h>
NS_ASSUME_NONNULL_BEGIN

@interface MentaCSJInterstitialAdapter : NSObject
@property (nonatomic, weak) id<MentaUnifiedInterstitialAdDelegate> delegate;

@end

NS_ASSUME_NONNULL_END

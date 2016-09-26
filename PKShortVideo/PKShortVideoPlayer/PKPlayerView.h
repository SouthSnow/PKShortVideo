//
//  PKPlayerView.h
//  PKShortVideo
//
//  Created by TYM01 on 16/9/26.
//  Copyright © 2016年 pepsikirk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PKPlayerView : UIView

@property (nonatomic ,assign , readonly) BOOL isPlaying;

- (instancetype)initWithFrame:(CGRect)frame videoPath:(NSString *)videoPath previewImage:(UIImage *)previewImage;

- (void)play;
- (void)stop;

@end

NS_ASSUME_NONNULL_END

//
//  GameViewController.h
//  CrazyRocketManApp
//
//  Created by Regie G. Pinat on 10/18/12.
//  Copyright (c) 2012 Regie G. Pinat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GameViewController : UIViewController <UIAccelerometerDelegate>
{
    NSTimer *timerBounce;
    NSTimer *timerPlatformMove;
    NSTimer *timerdelay;
    
    UIImageView *rocketMan;
    UIAccelerometer *accelerometer;
}

@property (nonatomic,strong) NSMutableArray *arrayOfPlatforms;

-(int)getRandomNumber:(int)from to:(int)to;
-(void)jump;
-(BOOL)CheckifJump:(UIImageView *)platform;
-(void)startbouncing;
@end

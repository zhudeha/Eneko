#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <sys/utsname.h>
#import "GcUniversal/GcImagePickerUtils.h"
#import <Cephei/HBPreferences.h>

HBPreferences* preferences;

extern BOOL enabled;

BOOL isLockscreenVisible = NO;
BOOL isHomescreenVisible = NO;
BOOL isControlCenterVisible = NO;
BOOL isInCall = NO;
BOOL screenIsOn = YES;
BOOL isOnLowPower = NO;
BOOL supportsLowPowerMode = NO;

AVQueuePlayer* playerLS;
AVPlayerItem* playerItemLS;
AVPlayerLooper* playerLooperLS;
AVPlayerLayer* playerLayerLS;
UIView* dimBlurViewLS;
UIVisualEffectView* blurViewLS;
UIBlurEffect* blurLS;
UIView* dimViewLS;

AVQueuePlayer* playerHS;
AVPlayerItem* playerItemHS;
AVPlayerLooper* playerLooperHS;
AVPlayerLayer* playerLayerHS;
UIView* dimBlurViewHS;
UIVisualEffectView* blurViewHS;
UIBlurEffect* blurHS;
UIView* dimViewHS;

AVQueuePlayer* playerCC;
AVPlayerItem* playerItemCC;
AVPlayerLooper* playerLooperCC;
AVPlayerLayer* playerLayerCC;
UIView* dimBlurViewCC;
UIVisualEffectView* blurViewCC;
UIBlurEffect* blurCC;
UIView* dimViewCC;

// lockscreen
BOOL enableLockscreenWallpaperSwitch = NO;
NSString* lockscreenVolumeValue = @"0.0";
NSString* lockscreenBlurAmountValue = @"0.0";
NSString* lockscreenBlurModeValue = @"0";
NSString* lockscreenDimValue = @"0.0";

// homescreen
BOOL enableHomescreenWallpaperSwitch = NO;
NSString* homescreenVolumeValue = @"0.0";
NSString* homescreenBlurAmountValue = @"0.0";
NSString* homescreenBlurModeValue = @"0";
NSString* homescreenDimValue = @"0.0";

// control center
BOOL enableControlCenterWallpaperSwitch = NO;
NSString* controlCenterVolumeValue = @"0.0";
NSString* controlCenterBlurAmountValue = @"0.0";
NSString* controlCenterBlurModeValue = @"0";
NSString* controlCenterDimValue = @"0.0";

// miscellaneous
BOOL muteWhenMusicPlaysSwitch = YES;
BOOL hideWhenLowPowerSwitch = YES;

@interface CSCoverSheetViewController : UIViewController
- (void)adjustFrame;
@end

@interface SBIconController : UIViewController
- (void)adjustFrame;
@end

@interface CCUIModularControlCenterOverlayViewController : UIViewController
- (void)adjustFrame;
@end
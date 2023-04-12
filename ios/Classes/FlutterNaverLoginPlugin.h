#import <Flutter/Flutter.h>

@interface FlutterNaverLoginPlugin : NSObject<FlutterPlugin>
{
    NaverThirdPartyLoginConnection *_thirdPartyLoginConn;
    FlutterResult _naverResult;
}
@end

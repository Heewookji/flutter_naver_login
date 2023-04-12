#import <Flutter/Flutter.h>

#if __has_include(<NaverThirdPartyLogin/NaverThirdPartyLogin.h>)
#import <NaverThirdPartyLogin/NaverThirdPartyLogin.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "NaverThirdPartyLogin.h"
#endif

@interface FlutterNaverLoginPlugin : NSObject<FlutterPlugin>
{
    NaverThirdPartyLoginConnection *_thirdPartyLoginConn;
    FlutterResult _naverResult;
}
@end

#import "jsbridge.h"
@implementation NSDictionary (EVJSExposure)
CUJS_EXPOSE_THIS_CLASS;
CUJS_TRANSPOND_NAMES_PLAIN;
- (id)invokeUndefinedMethodFromWebScript:(NSS*)name withArguments:(NSA*)args {
	if ([args count] == 0)
		return self[name];
	return nil;
}
@end
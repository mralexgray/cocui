#import "jsbridge.h"
@implementation NSUserDefaults (EVJSExposure)
CUJS_EXPOSE_THIS_CLASS;
CUJS_TRANSPOND_NAMES_PLAIN;
- (id)invokeUndefinedMethodFromWebScript:(NSS*)name withArguments:(NSA*)args {
	if ([args count] == 0)
		return self[name];
	else
		[self setObject:args[0] forKey:name];
	return nil;
}
@end

#import <JavaScriptCore/JavaScriptCore.h>

#define CU_JSStringToNSString(jstr) 	(__bridge NSS*)JSStringCopyCFString(kCFAllocatorDefault, jstr)

@interface WebScriptObject (EVJS)

- (id)  invokeWithArguments:			 (NSA*)args 	 inContext:(JSContextRef)jctx;
+ (id)  cocoaRepresentationOfJSValue:(JSValueRef)val inContext:(JSContextRef)ctx;
+ (NSS*)JSONRepresentationOfJSValue: (JSValueRef)val inContext:(JSContextRef)ctx;
- (id)  cocoaRepresentationInContext:(JSContextRef)ctx;
- (NSS*)JSONRepresentationInContext: (JSContextRef)ctx;

@end

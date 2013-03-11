
#import "EVWebView.h"
#import "CUApp.h"

@class WebInspector, WebInspectorWindowController, EVApp;
extern EVApp *g_app; // global instance of application
@interface EVApp : NSApplication
@property (NATOM, STRNG)  CUApp *jsapp; 	// "App" namespace exposed in Javascript
@property (RONLY)	       BOOL  developmentMode;
	
@property (ASS)	IBOutlet    NSW *logPanel;
@property (ASS)	IBOutlet NSTXTV *logTextView;
@property (NATOM, STRNG)    NSD *logTextAttrs;
	
@property (RONLY) WebInspector 					*webInspector;
@property (STRNG) WebInspectorWindowController 	*webInspectorWindowController;

+ (EVApp*) instance;
- (void)   loadMainScript;
-(IBAction) showInspector:(id)sender; // for frontmost win or main if no wins
-(IBAction) showConsole:(id)sender; // for frontmost win or main if no wins
-(IBAction) showMainConsole:(id)sender;
-(IBAction) reloadApp:(id)sender;
//-(WebInspector*) webInspector;
-(void)	dlog:(NSS*)format, ...;
-(void) dlog:(NSS*)format args:(va_list)args;
@end

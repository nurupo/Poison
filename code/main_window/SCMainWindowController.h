#import <Cocoa/Cocoa.h>

@class SCGradientView, PXListView;
@interface SCMainWindowController : NSWindowController <NSWindowDelegate, NSSplitViewDelegate>

@property (strong) IBOutlet NSSplitView *splitView;
@property (strong) IBOutlet NSImageView *userImage;
@property (strong) IBOutlet SCGradientView *sidebarHead;
@property (strong) IBOutlet NSTextField *displayName;
@property (strong) IBOutlet NSTextField *userStatus;
@property (strong) IBOutlet NSImageView *statusLight;
@property (strong) IBOutlet PXListView *listView;

/* Sheets */
@property (strong) IBOutlet NSPanel *statusChangeSheet;
@property (strong) IBOutlet NSPanel *nickChangeSheet;
@property (strong) IBOutlet NSTextField *nickSheetField;
@property (strong) IBOutlet NSTextField *statusSheetField;
@property (strong) IBOutlet NSPopUpButton *statusSheetPopUp;

- (IBAction)presentCustomStatusSheet:(id)sender;
- (IBAction)presentNickChangeSheet:(id)sender;

@end

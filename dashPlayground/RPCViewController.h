//
//  RPCViewController.h
//  dashPlayground
//
//  Created by Sam Westrich on 4/3/17.
//  Copyright © 2017 dashfoundation. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface RPCViewController : NSViewController
@property (strong) IBOutlet NSTextField *commandField;
- (IBAction)runCommand:(id)sender;
@property (strong) IBOutlet NSTextView *terminalOutput;

@end

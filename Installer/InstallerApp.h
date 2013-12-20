//
//	InstallerApp.h
//
//	Installer application
//
//	Copyright (c) 2003-2013 Alex Harper
//
// 	This file is part of MenuMeters.
//
// 	MenuMeters is free software; you can redistribute it and/or modify
// 	it under the terms of the GNU General Public License version 2 as
//  published by the Free Software Foundation.
//
// 	MenuMeters is distributed in the hope that it will be useful,
// 	but WITHOUT ANY WARRANTY; without even the implied warranty of
// 	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// 	GNU General Public License for more details.
//
// 	You should have received a copy of the GNU General Public License
// 	along with MenuMeters; if not, write to the Free Software
// 	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>
#import <Security/Authorization.h>
#import <Security/AuthorizationTags.h>
#import <sys/types.h>
#import <sys/uio.h>
#import <unistd.h>
#import "Installer.h"
#import "MenuMeters.h"
#import "AppleUndocumented.h"


@interface InstallerApp : NSObject {

	// Main window interface
	IBOutlet NSWindow				*installWindow;
	IBOutlet NSTabView				*installOrUpdate;
	IBOutlet NSButtonCell			*installLocationAllUser;
	IBOutlet NSButtonCell			*installLocationCurrentUser;
	IBOutlet NSButton				*installButton;
	IBOutlet NSButton 				*quitButton;
	IBOutlet NSButton				*uninstallButton;
	// Progress
	IBOutlet NSPanel				*installProgressPanel;
	IBOutlet NSProgressIndicator	*installProgress;

} // InstallerApp

// NSApp stuff
- (void)awakeFromNib;

@end
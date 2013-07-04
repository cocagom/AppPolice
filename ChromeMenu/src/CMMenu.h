//
//  ChromeMenu.h
//  Ishimura
//
//  Created by Maksym on 7/3/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMMenuItem.h"

@class ChromeMenuUnderlyingWindow;

@interface CMMenu : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
@private
	IBOutlet ChromeMenuUnderlyingWindow *_underlyingWindow;
	IBOutlet NSTextField *title;
	IBOutlet NSTableView *_menuTableView;
	
	NSMutableArray *_menuItems;
}

//- (id)initWithItems:(NSArray *)items;

- (void)addItem:(CMMenuItem *)newItem;
- (void)update;



- (IBAction)buttonClick:(id)sender;

@end
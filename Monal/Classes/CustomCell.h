//
//  UIView.h
//  SworIM
//
//  Created by Anurodh Pokharel on 1/16/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface  CustomCell:UITableViewCell
{
NSString* text; 
	UIColor* oldColor; 
}
- (void)drawRect:(CGRect)rect; 

@property (nonatomic) NSString* text;
@property (nonatomic) UILabel* buddyname;
@property (nonatomic) UILabel* buddystatus;


@end

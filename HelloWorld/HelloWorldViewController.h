//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Aaron Sorgius on 5/26/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController {
    
    UILabel *label;
    UIButton *button;
}
@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, retain) IBOutlet UIButton *button;

- (IBAction)pushedButton:(id)sender;

@end

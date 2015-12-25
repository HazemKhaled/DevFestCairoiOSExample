//
//  DetailViewController.h
//  gdg
//
//  Created by Hazem Khaled on 12/25/15.
//  Copyright © 2015 Hazem Khaled. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


//  MDItemDetailsViewController.h

#import <UIKit/UIKit.h>
@class MDItem;

@interface MDItemDetailsViewController : UIViewController

@property(nonatomic, strong) MDItem *item;
@property(nonatomic) BOOL allowInteraction;

@end
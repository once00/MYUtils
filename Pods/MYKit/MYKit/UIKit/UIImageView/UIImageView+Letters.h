//
//  UIImageView+Letters.h
//  MYKitDemo
//
//  Created by sunjinshuai on 2017/9/6.
//  Copyright © 2017年 com.51fanxing. All rights reserved.
//  https://github.com/bachonk/UIImageView-Letters

#import <UIKit/UIKit.h>

@interface UIImageView (Letters)

/**
 NSString *userName = @"Michael Bluth";
 UIImageView *myImgView = [[UIImageView alloc] initWithFrame:CGRectMake(10, 10, 50, 50)];
 [myImgView setImageWithString:userName color:nil circular:YES];
 */

/**
 Sets the image property of the view based on initial text. A random background color is automatically generated.
 
 @param string The string used to generate the initials. This should be a user's full name if available
 */
- (void)setImageWithString:(NSString *)string;

/**
 Sets the image property of the view based on initial text and a specified background color.
 
 @param string The string used to generate the initials. This should be a user's full name if available
 @param color (optional) This optional paramter sets the background of the image. If not provided, a random color will be generated
 */

- (void)setImageWithString:(NSString *)string color:(UIColor *)color;

/**
 Sets the image property of the view based on initial text, a specified background color, and a circular clipping
 
 @param string The string used to generate the initials. This should be a user's full name if available
 @param color (optional) This optional paramter sets the background of the image. If not provided, a random color will be generated
 @param isCircular This boolean will determine if the image view will be clipped to a circular shape
 */
- (void)setImageWithString:(NSString *)string
                     color:(UIColor *)color
                  circular:(BOOL)isCircular;

/**
 Sets the image property of the view based on initial text, a specified background color, a custom font, and a circular clipping
 
 @param string The string used to generate the initials. This should be a user's full name if available
 @param color (optional) This optional paramter sets the background of the image. If not provided, a random color will be generated
 @param isCircular This boolean will determine if the image view will be clipped to a circular shape
 @param fontName This will use a custom font attribute. If not provided, it will default to system font
 */
- (void)setImageWithString:(NSString *)string
                     color:(UIColor *)color
                  circular:(BOOL)isCircular
                  fontName:(NSString *)fontName;

/**
 Sets the image property of the view based on initial text, a specified background color, custom text attributes, and a circular clipping
 
 @param string The string used to generate the initials. This should be a user's full name if available
 @param color (optional) This optional paramter sets the background of the image. If not provided, a random color will be generated
 @param isCircular This boolean will determine if the image view will be clipped to a circular shape
 @param textAttributes This dictionary allows you to specify font, text color, shadow properties, etc., for the letters text, using the keys found in NSAttributedString.h
 */
- (void)setImageWithString:(NSString *)string
                     color:(UIColor *)color
                  circular:(BOOL)isCircular
            textAttributes:(NSDictionary *)textAttributes;

@end

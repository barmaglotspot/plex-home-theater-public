/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#import <UIKit/UIKit.h>
#include "IOSKeyboard.h"

@interface KeyboardView : UIView <UITextFieldDelegate>
{
  NSMutableString *text;
  BOOL _confirmed;
  CIOSKeyboard *_iosKeyboard;
  bool *_canceled;
  UITextField *_textField;
  UILabel *_heading;
  BOOL _keyboardIsShowing;
  CGFloat _kbHeight;
}

@property (nonatomic, retain) NSMutableString *text;
@property (getter = isConfirmed) BOOL _confirmed;
@property (assign, setter = registerKeyboard:) CIOSKeyboard *_iosKeyboard;

- (void) setDefault:(NSString *)defaultText;
- (void) setHeading:(NSString *)heading;
- (void) setHidden:(BOOL)hidden;
- (void) activate;
- (void) deactivate;
- (void) textChanged:(NSNotification*)aNotification;
- (void) setCancelFlag:(bool *)cancelFlag;
@end
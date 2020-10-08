//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#include "UIKit/UIView.h"

@class UITabTabItem;
@protocol UITabBarDelegate;

@interface UITabBarButton : UIView {
@public
    UITabBarItem* _item;
    id<UITabBarDelegate> _delegate;
}

- (instancetype)initWithFrame:(CGRect)frame item:(UITabBarItem*)item delegate:(id<UITabBarDelegate>)delegate;
- (void)drawRect:(CGRect)pos;
- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event;
@end

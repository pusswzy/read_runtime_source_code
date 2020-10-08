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
#pragma once

#import <UIKit/UIControl.h>

#import <Starboard/SmartTypes.h>

@class UIRuntimeEventConnection;

@interface UIControl () {
@protected
    StrongId<NSMutableArray> _registeredActions;
    UIControlContentHorizontalAlignment _contentHorizontalAlignment;
    UIControlContentVerticalAlignment _contentVerticalAlignment;

    BOOL _touchInside;
    UIControlState _curState;
    StrongId<NSMutableArray> _activeTouches;
    StrongId<UITouch> _controlEventTouch;
    UIControlEvents _sendControlEventsOnBack;
}

- (void)_addEventConnection:(UIRuntimeEventConnection*)connection;
@end

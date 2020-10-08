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

#import "Starboard.h"
#import <UIKit/UINavigationController.h>
#import "UINavigationControllerInternal.h"
#import "LoggingNative.h"

static const wchar_t* TAG = L"UINavigationPane";

@implementation UINavigationPane

/**
 @Status Interoperable
*/
- (void)layoutSubviews {
    if (_parentController == nil) {
        TraceVerbose(TAG, L"UINavigationPane: parent destroyed?");
    }

    if ([_parentController respondsToSelector:@selector(_layoutContainer)]) {
        [static_cast<UINavigationController*>(_parentController) _layoutContainer];
    }
}

@end

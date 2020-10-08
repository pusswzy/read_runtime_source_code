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

#import "StoryBoardViewController.h"

@implementation StoryBoardViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // Main storyboard view
    UIStoryboard* xamlStoryBoard = [UIStoryboard storyboardWithName:@"XAMLCatalog" bundle:[NSBundle mainBundle]];

    // IMPORTANT: Each UIKit control that is added to XAMLCatalog should be contained within its own storyboard file (.storyboard)
    // This will ensure that when we use VSIMPORTER on XAMLCatalog, we can easily verify our storyboard coverage

    // UIActionSheet
    UIViewController* actionSheetVC = [xamlStoryBoard instantiateViewControllerWithIdentifier:@"UIActionSheetSB"];
    [self addMenuItemViewController:actionSheetVC andTitle:@"UIActionSheetSB"];

    // UIActivityIndicatorView
    UIViewController* activityIndicatorVC = [xamlStoryBoard instantiateViewControllerWithIdentifier:@"UIActivityIndicatorViewSB"];
    [self addMenuItemViewController:activityIndicatorVC andTitle:@"UIActivityIndicatorViewSB"];

    // UIButton
    UIViewController* buttonVC = [xamlStoryBoard instantiateViewControllerWithIdentifier:@"UIButtonSB"];
    [self addMenuItemViewController:buttonVC andTitle:@"UIButtonSB"];

    // UISlider
    UIViewController* sliderVC = [xamlStoryBoard instantiateViewControllerWithIdentifier:@"UISliderSB"];
    [self addMenuItemViewController:sliderVC andTitle:@"UISliderSB"];

    // UITextField
    UIViewController* textFieldVC = [xamlStoryBoard instantiateViewControllerWithIdentifier:@"UITextFieldSB"];
    [self addMenuItemViewController:textFieldVC andTitle:@"UITextFieldSB"];
    
    // CustomEditControlViewController
    UIViewController* editVC = [xamlStoryBoard instantiateViewControllerWithIdentifier:@"CustomTextControlViewController"];
    [self addMenuItemViewController:editVC andTitle:@"Custom Text View"];
}

@end

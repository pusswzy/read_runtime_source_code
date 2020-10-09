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

#import <UIKit/UIKit.h>

@interface SBButtonsViewController : UITableViewController

@property (nonatomic, retain, readonly) UIButton* grayButton;
@property (nonatomic, retain, readonly) UIButton* imageButton;

@property (nonatomic, retain, readonly) UIButton* roundedButtonType;
@property (nonatomic, retain, readonly) UIButton* detailDisclosureButtonType;
@property (nonatomic, retain, readonly) UIButton* infoLightButtonType;
@property (nonatomic, retain, readonly) UIButton* infoDarkButtonType;
@property (nonatomic, retain, readonly) UIButton* contactAddButtonType;

@property (nonatomic, retain) NSArray* menuItems;

@end

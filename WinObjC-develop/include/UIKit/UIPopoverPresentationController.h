/*
* Copyright (c) 2011, The Iconfactory. All rights reserved.
*
* Copyright (c) 2015 Microsoft Corporation. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
* 3. Neither the name of The Iconfactory nor the names of its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE ICONFACTORY BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#include <UIKit/UIPresentationController.h>
#include <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIPopoverController.h>

UIKIT_EXPORT_CLASS
@interface UIPopoverPresentationController : UIPresentationController

@property (nonatomic, readwrite) UIEdgeInsets popoverLayoutMargins;
@property (nonatomic, copy) UIColor* backgroundColor;
@property (nonatomic, copy) NSArray* passthroughViews;
@property (nonatomic, readwrite, retain) Class popoverBackgroundViewClass;
@property (nonatomic, retain) UIBarButtonItem* barButtonItem;
@property (nonatomic, retain) UIView* sourceView;
@property (nonatomic) CGRect sourceRect;
@property (nonatomic, assign) id<UIPopoverPresentationControllerDelegate> delegate;
@property (nonatomic) UIPopoverArrowDirection permittedArrowDirections;
@property (nonatomic, readonly) UIPopoverArrowDirection arrowDirection;

@end

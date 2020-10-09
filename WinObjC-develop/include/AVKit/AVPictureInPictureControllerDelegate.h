//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
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

#import <AVKit/AVKitExport.h>
#import <Foundation/NSObject.h>

@class AVPictureInPictureController;

@protocol AVPictureInPictureControllerDelegate <NSObject>
@optional
- (void)pictureInPictureController:(AVPictureInPictureController*)pictureInPictureController
    restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(BOOL restored))completionHandler;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController*)pictureInPictureController;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController*)pictureInPictureController;
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController*)pictureInPictureController;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController*)pictureInPictureController;
@end

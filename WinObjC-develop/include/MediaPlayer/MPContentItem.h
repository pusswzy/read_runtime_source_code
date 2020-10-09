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

#import <Foundation/NSObject.h>
#import <MediaPlayer/MediaPlayerExport.h>

@class NSString;
@class MPMediaItemArtwork;

MEDIAPLAYER_EXPORT_CLASS
@interface MPContentItem : NSObject

@property (nonatomic, strong) MPMediaItemArtwork* artwork STUB_PROPERTY;
@property (getter = isContainer, assign, nonatomic) BOOL container STUB_PROPERTY;
@property (readonly, copy, nonatomic) NSString* identifier STUB_PROPERTY;
@property (getter = isPlayable, assign, nonatomic) BOOL playable STUB_PROPERTY;
@property (assign, nonatomic) float playbackProgress STUB_PROPERTY;
@property (copy, nonatomic) NSString* subtitle STUB_PROPERTY;
@property (copy, nonatomic) NSString* title STUB_PROPERTY;

- (instancetype)initWithIdentifier:(NSString*)identifier STUB_METHOD;
@end

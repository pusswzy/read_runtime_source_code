#!/bin/sh
#
# Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.
#

set -eu

xcodebuild -project FBRetainCycleDetector.xcodeproj \
           -scheme FBRetainCycleDetector \
           -destination "platform=iOS Simulator,name=iPhone 6s" \
           -sdk iphonesimulator \
           build test

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

#import <StubReturn.h>
#import <Starboard.h>

#import <UIKit/UIColor.h>
#import <UIKit/UIFont.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIImage.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UILabel.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UIView.h>

#import <Foundation/NSString.h>

#import <UIViewInternal.h>
#import "UIDatePicker+Internal.h"

static const wchar_t* TAG = L"UIPickerView";

static const bool DEBUG_ALL = false;
static const bool DEBUG_VERBOSE = DEBUG_ALL || true;

struct RowData {
    float _yPos;
    StrongId<UITableViewCell> _rowCell;
    idretain _rowString;
    bool _invalid;
};

@interface UIPickerView ()
- (id)_subCellSelected:(int)row fromPicker:(UIPickerSubView*)fromPicker;
@end

@interface UIPickerSubView : UIScrollView {
@public
    int _componentNum;
    int _selectedRow;
    int _targetSelectedRow;
    id _dataSource, _parent;

    float _defaultRowHeight;
    RowData* _rowData;
    int _numRows;
    float _width, _rowHeight;
    UITextAlignment _alignment;
    CGRect _curSize;
}
@end

@implementation UIPickerSubView
- (instancetype)initWithFrame:(CGRect)pos {
    [super initWithFrame:pos];
    [super setDelegate:(id<UIScrollViewDelegate>)self];
    [self setShowsVerticalScrollIndicator:FALSE];
    [self setBackgroundColor:[UIColor windowsControlDefaultBackgroundColor]];

    return self;
}

- (id)reloadComponent {
    _numRows = [_dataSource pickerView:_parent numberOfRowsInComponent:_componentNum];

    //  Grab rows
    _rowData = (RowData*)calloc(_numRows, sizeof(RowData));

    float cellHeight = _defaultRowHeight;

    if ([_dataSource respondsToSelector:@selector(pickerView:rowHeightForComponent:)]) {
        cellHeight = [_dataSource pickerView:_parent rowHeightForComponent:_componentNum];
    }
    _rowHeight = cellHeight;
    int curRow = 0;
    float y = 0;

    for (int j = 0; j < _numRows; j++) {
        _rowData[j]._rowCell = nil;
        _rowData[j]._yPos = y;

        y += _rowHeight;
    }

    CGSize contentSize;
    contentSize.width = _width;
    contentSize.height = y;

    [self setContentSize:contentSize];

    return self;
}

- (void)layoutSubviews {
    CGRect bounds = [self bounds];

    if (memcmp(&bounds.size, &_curSize.size, sizeof(CGSize)) != 0) {
        UIEdgeInsets inset = { 0 };

        inset.top = bounds.size.height / 2;
        inset.bottom = bounds.size.height / 2;
        if (_numRows > 0) {
            inset.top -= _rowHeight / 2;
            inset.bottom -= _rowHeight / 2;
        }
        [self setContentInset:inset];
    }

    [super layoutSubviews];

    showVisibleCells(self);

    if (memcmp(&bounds.size, &_curSize.size, sizeof(CGSize)) != 0) {
        memcpy(&_curSize, &bounds, sizeof(CGRect));

        if (_selectedRow < _numRows && _selectedRow >= 0) {
            CGRect bounds = [self bounds];
            [self setContentOffset:CGPointMake(0, _rowData[_selectedRow]._yPos - bounds.size.height / 2.0f + _rowHeight / 2.0f)
                          animated:NO];
        }
    }
}

static void showVisibleCells(UIPickerSubView* self) {
    CGPoint scrollPoint = [self contentOffset];
    CGRect bounds = [self bounds];
    if (DEBUG_VERBOSE) {
        TraceVerbose(TAG,
                     L"showVisibleCells: scrollPoint=[%f,%f], bounds=[origin=[%f, %f], size=[%f, %f]]",
                     scrollPoint.x,
                     scrollPoint.y,
                     bounds.origin.x,
                     bounds.origin.y,
                     bounds.size.width,
                     bounds.size.height);
    }

    for (int j = 0; j < self->_numRows; j++) {
        RowData* curRow = &self->_rowData[j];

        if (curRow->_yPos + self->_rowHeight < scrollPoint.y || curRow->_yPos > scrollPoint.y + bounds.size.height) {
            if (curRow->_rowCell != nil) {
                if (DEBUG_VERBOSE) {
                    TraceVerbose(TAG,
                                 L"showVisibleCells: removing cell[%d] with rowString=%hs, curRow->_yPos=%f, self->_rowHeight=%f, "
                                 L"scrollPoint.y=%f,  bounds.size.height=%f",
                                 j,
                                 [curRow->_rowString UTF8String],
                                 curRow->_yPos,
                                 self->_rowHeight,
                                 scrollPoint.y,
                                 bounds.size.height);
                }

                [curRow->_rowCell removeFromSuperview];
                curRow->_rowCell = nil;
            }
        } else {
            if (curRow->_rowCell == nil || (curRow->_rowCell != nil && curRow->_invalid)) {
                CGRect frame = { 0.0, 0.0, 0.0, 0.0 };
                if ([self->_dataSource respondsToSelector:@selector(pickerView:titleForRow:forComponent:)] ||
                    [self->_dataSource respondsToSelector:@selector(_pickerView:titleForRow:forComponent:withColor:)]) {
                    id rowString;
                    id rowColor;

                    if ([self->_dataSource respondsToSelector:@selector(_pickerView:titleForRow:forComponent:withColor:)]) {
                        rowString = [[static_cast<UIDatePicker*>(self->_dataSource) _pickerView:self->_parent
                                                                                    titleForRow:j
                                                                                   forComponent:self->_componentNum
                                                                                      withColor:&rowColor] retain];
                    } else {
                        rowString = [[self->_dataSource pickerView:self->_parent titleForRow:j forComponent:self->_componentNum] retain];
                        rowColor = [UIColor blackColor];
                    }

                    if (DEBUG_VERBOSE) {
                        TraceVerbose(TAG, L"showVisibleCells: adding cell[%d] with rowString=%hs", j, [rowString UTF8String]);
                    }

                    curRow->_rowString = rowString;
                    curRow->_invalid = false;

                    if (curRow->_rowCell == nil) {
                        curRow->_rowCell.attach([[UITableViewCell alloc] initWithFrame:frame]);
                        [curRow->_rowCell setSelectionStyle:UITableViewCellSelectionStyleNone];
                        [curRow->_rowCell setBackgroundColor:nil];
                        [curRow->_rowCell setFont:[UIFont systemFontOfSize:15]];
                        [curRow->_rowCell setTag:j];
                    }

                    [curRow->_rowCell setText:(id)curRow->_rowString];
                    [curRow->_rowCell setTextColor:rowColor];
                    [curRow->_rowCell setTextAlignment:self->_alignment];
                } else {
                    curRow->_rowCell =
                        [[self->_dataSource pickerView:self->_parent viewForRow:j forComponent:self->_componentNum reusingView:nil] retain];
                    [curRow->_rowCell setTag:j];
                }

                if ([curRow->_rowCell superview] != self) {
                    frame.origin.x = 0;
                    frame.origin.y = curRow->_yPos;
                    frame.size.width = bounds.size.width;
                    frame.size.height = self->_rowHeight;

                    [curRow->_rowCell setFrame:frame];
                    [self addSubview:curRow->_rowCell];
                }
            } else {
                if (DEBUG_VERBOSE) {
                    TraceVerbose(TAG, L"showVisibleCells: show cell[%d] with rowString=%hs", j, [curRow->_rowString UTF8String]);
                }

                [curRow->_rowCell setHidden:0];
            }
        }
    }
}

static int findNearestRow(UIPickerSubView* self, CGPoint offset) {
    //  Compensate for insets
    CGRect bounds;
    bounds = [self bounds];

    offset.y += bounds.size.height / 2.0f;
    int row = (int)(offset.y / self->_rowHeight);

    if (row >= self->_numRows) {
        row = self->_numRows - 1;
    }
    if (row < 0) {
        row = 0;
    }

    return row;
}

static float getRowContentPos(UIPickerSubView* self, int row) {
    //  Compensate for insets
    CGRect bounds;
    bounds = [self bounds];

    return self->_rowData[row]._yPos - bounds.size.height / 2.0f + self->_rowHeight / 2.0f;
}

- (id)_selectRow:(int)row animated:(BOOL)animated {
    _selectedRow = row;
    _targetSelectedRow = -1;
    [self setContentOffset:CGPointMake(0, getRowContentPos(self, row)) animated:animated];

    return 0;
}

- (id)invalidateComponents {
    for (int j = 0; j < _numRows; j++) {
        RowData* curRow = &_rowData[j];

        if (curRow->_rowCell != nil) {
            curRow->_invalid = true;
        }
    }

    showVisibleCells(self);

    return 0;
}

static void notifySetSelected(UIPickerSubView* self, int idx) {
    if (idx != self->_selectedRow) {
        self->_selectedRow = idx;
        [self->_parent _subCellSelected:self->_selectedRow fromPicker:self];
    }
}

- (id)scrollViewWillBeginDragging:(id)scrollView {
    _targetSelectedRow = -1;

    return self;
}

- (id)scrollViewDidScroll:(id)scrollView {
    //  Once we scroll near our target, count is as selected
    int selIdx = findNearestRow(self, [self contentOffset]);

    if (_targetSelectedRow != -1 && selIdx == _targetSelectedRow) {
        notifySetSelected(self, _targetSelectedRow);
        _targetSelectedRow = -1;
    }

    return self;
}

- (id)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate {
    if (decelerate) {
        return self;
    }
    return [self scrollViewDidEndDecelerating:scrollView];
}

- (id)scrollViewDidEndDecelerating:(id)scrollView {
    int selIdx = findNearestRow(self, [self contentOffset]);
    CGPoint dest = { 0, getRowContentPos(self, selIdx) };

    _targetSelectedRow = -1;
    if (dest != [self contentOffset]) {
        [self setContentOffset:dest animated:YES];
    }

    if (selIdx >= 0 && selIdx < _numRows) {
        UITableViewCell* selected = _rowData[selIdx]._rowCell;

        int row = [selected tag];
        notifySetSelected(self, row);
    }

    return self;
}

- (id)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint*)destination {
    int selIdx = findNearestRow(self, *destination);
    destination->y = getRowContentPos(self, selIdx);
    _targetSelectedRow = selIdx;

    return 0;
}

- (void)dealloc {
    if (_rowData != NULL) {
        for (int j = 0; j < _numRows; j++) {
            RowData* curRow = &_rowData[j];

            if (curRow->_rowCell != nil) {
                [curRow->_rowCell removeFromSuperview];
                curRow->_rowCell = nil;
            }
            curRow->_rowString = nil;
        }
        free(_rowData);
    }

    [super dealloc];
}

- (int)_selectedRow {
    return _selectedRow;
}

- (id)_cellSelectedUp:(UITableViewCell*)cell {
    int selIdx = [cell tag];
    CGPoint dest = { 0, getRowContentPos(self, selIdx) };

    if (dest != [self contentOffset]) {
        [self setContentOffset:dest animated:YES];
        _targetSelectedRow = selIdx;
    }

    return self;
}

@end

@implementation UIPickerView {
    id _delegate;
    id _dataSource;
    idretain _selectionBar;
    idretain _background;

    float _defaultRowHeight;

    UIPickerSubView* __unsafe_unretained* _subSections;
    int _numSections;
    BOOL _needsReload;
    int _selectedRowInComponents[16];
    UITextAlignment _componentAlignments[16];
}

/**
 @Status Interoperable
*/
+ (instancetype)allocWithZone:(NSZone*)zone {
    UIPickerView* ret = [super allocWithZone:zone];

    ret->_defaultRowHeight = 50.0f;

    return ret;
}

static void setupImages(UIPickerView* self) {
    [self setBackgroundColor:[UIColor whiteColor]];

    self->_background = [[[UIImageView alloc]
        initWithImage:[[UIImage imageNamed:@"/img/wheel_bg@2x.png"] stretchableImageWithLeftCapWidth:1 topCapHeight:0]] autorelease];
    self->_selectionBar = [[[UIImageView alloc]
        initWithImage:[[UIImage imageNamed:@"/img/picker-selection@2x.png"] stretchableImageWithLeftCapWidth:8 topCapHeight:0]]
        autorelease];

    CGRect bounds;
    bounds = [self bounds];
    [self->_background setFrame:bounds];
    [self->_background setAutoresizingMask:UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth];
    [self addSubview:self->_background];
}

/**
 @Status Caveat
 @Notes May not be fully implemented
*/
- (instancetype)initWithCoder:(NSCoder*)coder {
    [super initWithCoder:coder];
    setupImages(self);

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithFrame:(CGRect)pos {
    if (pos.size.height == 0.0f) {
        pos.size.height = 216.0f;
    }
    if (pos.size.width == 0.0f) {
        pos.size.width = 320.0f;
    }
    [super initWithFrame:pos];
    setupImages(self);

    return self;
}

/**
 @Status Stub
*/
- (void)setShowsSelectionIndicator:(BOOL)show {
    UNIMPLEMENTED();
}

/**
 @Status Interoperable
*/
- (void)setDelegate:(id)delegate {
    _delegate = delegate;
    _needsReload = TRUE;
    [self _setShouldLayout];
}

/**
 @Status Interoperable
*/
- (void)setDataSource:(id<UIPickerViewDataSource>)source {
    _dataSource = source;
    _needsReload = TRUE;
    [self _setShouldLayout];
}

/**
 @Status Interoperable
*/
- (int)selectedRowInComponent:(NSInteger)component {
    if ((int)component < _numSections) {
        return [_subSections[component] _selectedRow];
    }
    return _selectedRowInComponents[component];
}

/**
 @Status Interoperable
*/
- (void)layoutSubviews {
    [super layoutSubviews];

    if (_needsReload) {
        [self reloadAllComponents];
    } else {
        layoutSubSections(self);
    }
}

static void DestroySections(UIPickerView* self) {
    if (self->_subSections) {
        for (int i = 0; i < self->_numSections; i++) {
            self->_subSections[i]->_dataSource = nil;
            self->_subSections[i]->_parent = nil;
            [self->_subSections[i] removeFromSuperview];
            [self->_subSections[i] release];
        }

        free(self->_subSections);
        self->_subSections = NULL;
        self->_numSections = 0;
    }
}

static void layoutSubSections(UIPickerView* self) {
    float curX = 0;
    CGRect pos;
    pos = [self bounds];

    [self->_background setFrame:pos];

    float totalWidth = 0;
    for (int i = 0; i < self->_numSections; i++) {
        totalWidth += self->_subSections[i]->_width;
    }

    curX = (pos.size.width - totalWidth) / 2.0f;
    CGRect selectionPos;
    selectionPos.origin.x = curX;
    float borderX = 2.0f;

    for (int i = 0; i < self->_numSections; i++) {
        float width = self->_subSections[i]->_width;
        CGRect frame = { curX, pos.origin.y, width, pos.size.height - 1 };
        curX += width;
        [self->_subSections[i] setFrame:frame];

        CGRect pickerPos;
        pickerPos.origin.x = borderX;
        pickerPos.origin.y = 0;
        pickerPos.size.width = 0;
        pickerPos.size.height = pos.size.height;
        pickerPos.origin.x = borderX + frame.size.width;
        pickerPos.origin.y = 0;
        pickerPos.size.width = 0;
        pickerPos.size.height = pos.size.height;

        borderX += width;
    }

    selectionPos.size.height = 52;
    selectionPos.origin.y = pos.origin.y + 1 + pos.size.height / 2.0f - selectionPos.size.height / 2.0f;
    selectionPos.size.width = curX - selectionPos.origin.x;

    pos.origin.x = selectionPos.origin.x;
    pos.size.width = selectionPos.size.width;

    [self->_selectionBar setFrame:selectionPos];
    [self addSubview:self->_selectionBar];
    [self setAutoresizesSubviews:TRUE];
}

/**
 @Status Interoperable
*/
- (void)reloadAllComponents {
    _needsReload = FALSE;

    DestroySections(self);

    _numSections = 0;
    CGSize contentSize = { 0, 0 };

    id dataSource = _dataSource;
    if (dataSource == nil) {
        dataSource = _delegate;
    }

    if (dataSource != nil) {
        if ([dataSource respondsToSelector:@selector(numberOfComponentsInPickerView:)]) {
            _numSections = [dataSource numberOfComponentsInPickerView:self];
        } else {
            _numSections = 1;
        }
        _subSections = (UIPickerSubView**)calloc(_numSections, sizeof(id));

        float y = 0.0f;

        //  Grab section data
        for (int i = 0; i < _numSections; i++) {
            float width;

            if ([_delegate respondsToSelector:@selector(pickerView:widthForComponent:)]) {
                width = [_delegate pickerView:self widthForComponent:i];
            } else {
                width = (318.0f / (float)_numSections); // Using 318px For 1px border on left & right
            }

            _subSections[i] = [UIPickerSubView alloc];
            _subSections[i]->_parent = self;
            _subSections[i]->_dataSource = dataSource;
            _subSections[i]->_componentNum = i;
            _subSections[i]->_defaultRowHeight = _defaultRowHeight;
            _subSections[i]->_width = width;
            _subSections[i]->_alignment = _componentAlignments[i];
            _subSections[i]->_selectedRow = _selectedRowInComponents[i];

            CGRect frame = { 0, 0, 0, 0 };
            [_subSections[i] initWithFrame:frame];
            [_subSections[i] setTag:i];
            [self addSubview:(id)_subSections[i]];

            [_subSections[i] reloadComponent];
        }
    }

    layoutSubSections(self);
}

- (void)_invalidateAllComponents {
    for (int i = 0; i < _numSections; i++) {
        [_subSections[i] invalidateComponents];
    }
}

/**
 @Status Interoperable
*/
- (void)reloadComponent:(int)component {
    [self reloadAllComponents];
}

- (id)_subCellSelected:(int)row fromPicker:(UIPickerSubView*)fromPicker {
    int component = [fromPicker tag];

    if ([_delegate respondsToSelector:@selector(pickerView:didSelectRow:inComponent:)]) {
        [_delegate pickerView:self didSelectRow:row inComponent:component];
    }
    _selectedRowInComponents[component] = row;

    return self;
}

/**
 @Status Interoperable
*/
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated {
    // assert( component == 0 );
    _selectedRowInComponents[component] = row;

    if (component >= _numSections) {
        return;
    }

    if (_subSections != NULL) {
        if (row >= _subSections[component]->_numRows) {
            return;
        }

        [_subSections[component] _selectRow:row animated:animated];
    }
}

/**
 @Status Interoperable
*/
- (void)dealloc {
    DestroySections(self);

    _selectionBar = nil;
    _background = nil;
    [super dealloc];
}

- (id)_setAlignment:(UITextAlignment)alignment forComponent:(int)component {
    _componentAlignments[component] = alignment;
    return 0;
}

/**
 @Status Interoperable
*/
- (CGSize)rowSizeForComponent:(int)component {
    CGSize ret;

    memset(&ret, 0, sizeof(CGSize));
    if (component >= _numSections) {
        return ret;
    }

    if (_subSections != NULL) {
        ret.width = _subSections[component]->_width - 2.0f; //  -2 for padding
        ret.height = _subSections[component]->_defaultRowHeight;
    }

    return ret;
}

- (id)setMaximumDate:(id)date {
    return self;
}

/**
 @Status Interoperable
*/
- (CGSize)sizeThatFits:(CGSize)curSize {
    CGSize ret = { 320.f, 215.f };
    return ret;
}

/**
 @Status Stub
*/
- (NSInteger)numberOfRowsInComponent:(NSInteger)component {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
*/
- (UIView*)viewForRow:(NSInteger)row forComponent:(NSInteger)component {
    UNIMPLEMENTED();
    return StubReturn();
}

@end

//
//  ViewController.m
//  Runloop卡顿监听实践
//
//  Created by lihaoze on 2022/7/28.
//

#import "ViewController.h"
#import "HZFrozenObserverManager.h"

@interface ViewController () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UIView *redView;
@property (nonatomic, strong) UIButton *actionButton;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self.view addSubview:self.tableView];
    [self.view addSubview:self.actionButton];
    
    [[HZFrozenObserverManager sharedManager] startMonitor];
    
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    self.tableView.frame = CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height - 400);
    self.actionButton.frame = CGRectMake(0, 500, 100, 100);
}

#pragma mark - action method
- (void)handleActionbuttonClickAction:(UIButton *)sender {
    /// 我很好奇会在一次loop内执行完么
    /// 答案:全部都在一次loop中执行了 卡死了
//    for (int i = 0; i < 1000000000; i++) {
//        NSOperationQueue *obj = [[NSObject alloc] init];
//    }
    
    
    @try {
        NSArray *array = @[];
        array[1];
    } @catch (NSException *exception) {
        
    } @finally {
//        CFRunLoopRef runloop = CFRunLoopGetCurrent();
//        while (1) {
//            CFRunLoopRunInMode(kCFRunLoopCommonModes, 0.001, false);
//        }
    }
    
}

#pragma mark - UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 100;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"123" forIndexPath:indexPath];
    cell.textLabel.text = [NSString stringWithFormat:@"%zd行", indexPath.row];
    if (indexPath.row % 20 == 0) {
        NSLog(@"模拟卡死");
        sleep(2);
    }
    return cell;
}

- (UITableView *)tableView {
    if (!_tableView) {
        _tableView = [[UITableView alloc] init];
        _tableView.dataSource = self;
        _tableView.delegate = self;
            _tableView.rowHeight = 44;
        // _tableView.estimatedRowHeight = UITableViewAutomaticDimension;
        _tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
        [_tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"123"];
    }
    return _tableView;
}

- (UIView *)redView {
    if (!_redView) {
        _redView = [[UIView alloc] init];
        _redView.backgroundColor = [UIColor redColor];
    }
    return _redView;
}

- (UIButton *)actionButton {
    if (!_actionButton) {
        _actionButton = [UIButton buttonWithType:UIButtonTypeCustom];
        [_actionButton setTitle:@"按钮事件" forState:UIControlStateNormal];
        [_actionButton setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
        _actionButton.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightBold];
        [_actionButton addTarget:self action:@selector(handleActionbuttonClickAction:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _actionButton;
}

@end

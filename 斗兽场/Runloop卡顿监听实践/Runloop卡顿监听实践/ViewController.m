//
//  ViewController.m
//  Runloop卡顿监听实践
//
//  Created by lihaoze on 2022/7/28.
//

#import "ViewController.h"

@interface ViewController () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) UITableView *tableView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self.view addSubview:self.tableView];
    
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    self.tableView.frame = CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height - 300);
}

#pragma mark - UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 100;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"123" forIndexPath:indexPath];
    cell.textLabel.text = [NSString stringWithFormat:@"%zd行", indexPath.row];
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

@end

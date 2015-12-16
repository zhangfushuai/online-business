//
//  FinishedOrderView.h
//  几何社区
//
//  Created by KMING on 15/8/27.
//  Copyright (c) 2015年 lmh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyOrderViewController.h"
@interface FinishedOrderView : UIView<UITableViewDataSource,UITableViewDelegate,JHDataMagerDelegate,MJRefreshBaseViewDelegate>
{
    JHDataManager *_manager;  //网络数据请求
}
@property (nonatomic,strong)UITableView *tableView;
@property (nonatomic,weak)MyOrderViewController *delegate;//反向调用
@property (nonatomic,strong)NSMutableArray *allOrderArr;

@property (nonatomic)int page;
@property (nonatomic,strong)MJRefreshHeaderView *header;
@property (nonatomic,strong)MJRefreshFooterView *footer;
@end

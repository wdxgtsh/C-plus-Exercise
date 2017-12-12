//
//  main.cpp
//  002-C++日期&时间
//
//  Created by zhaolei on 2017/12/4.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    // 将now 转换为字符串形式
    char * dt = ctime(&now);
    
    cout << "本地日期和事假:" << dt << endl;
    
    // 把now 转换为 tm 结构
    tm * gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期 和 时间:" << dt << endl;
    

    cout << "1970 到目前经过秒数：" << now << endl;
    tm * ltm = localtime(&now);
    
    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月：" << 1 + ltm->tm_mon << endl;
    cout << "日：" << ltm->tm_mday << endl;
    cout << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
    
    //
    
    return 0;
}

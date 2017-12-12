//
//  main.cpp
//  003-C++基本的输入输出流
//
//  Created by zhaolei on 2017/12/4.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    // 标准输出流
    char str[] = "Hello C++";
    cout << "Value of str is :" << str << endl;
    
    // 标准输入流
    char name[50];
    char sex[20];
    cin >> name >> sex;
    cout << "您的名字是:" << name << ";性别是:" << sex << endl;
    
    //标准错误流
    char str1[] = "Unable to read......";
    cerr << "Error message :" << str1 << endl;
    
    
    // 标准日志流
    char str2[] = "Unable to read .......";
    clog << "Error message :" << str2 << endl;
    
    return 0;
}

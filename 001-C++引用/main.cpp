//
//  main.cpp
//  001-C++引用
//
//  Created by zhaolei on 2017/12/4.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int i;
    double d;
    
    int& r = i;
    double& s = d;
    
    i = 5;
    cout << "Value of i = " << i << endl;
    cout << "Value of i reference = " << r << endl;
    cout << "Address of i = " << &i << endl;
    cout << "Address of i reference = " << &r << endl;

    return 0;
}

//
//  main.cpp
//  008-C++内联函数
//
//  Created by zhaolei on 2017/12/12.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

#include <iostream>
using namespace std;

/**
 *  C++ 内联函数是通常和 类一起使用，如果一个函数时内联的，那么在编译时 编译器会把该函数的代码副本放置在每个调用该函数的地方
 *  对内联函数进行任何修改 都需要重新编译函数的所有客户端  因为编译器需要重新更换一次所有的代码  否则将会继续使用旧的函数
 *  如果想把一个函数定义为内联函数 则需要在函数名前面放置关键字 inline，在调用函数之前需要对函数进行定义，如果已定义的函数多余一行，编译器会忽略inline限定符
 *  在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。
 */


inline int Max(int x, int y)
{
    return (x > y) ? x : y;
}


int main(int argc, const char * argv[]) {
    
    cout << "Max (20,10): " << Max(20,10) << endl;
    cout << "Max (0,200): " << Max(0,200) << endl;
    cout << "Max (100,1010): " << Max(100,1010) << endl;
    
    return 0;
}

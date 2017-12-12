//
//  main.cpp
//  009-C++this指针
//
//  Created by zhaolei on 2017/12/12.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

/**
 *  在C++中  每一个对象都能通过 this 指针 来访问自己的地址  this指针是所有成员函数的隐含参数
 *  因此，在成员函数内部，它可以用来指向调用对象
 *  友元函数没有  this 指针，因为友元 不是类的成员 只有成员函数才有this指针
 */

#include <iostream>
using namespace std;

class Box
{
public:
    // 构造函数定义
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "调用构造函数" << endl;
        length = l;
        breadth = b;
        height = h;
    }
    
    double Volume()
    {
        return length * breadth * height;
    }
    
    int compare(Box box)
    {
        return this->Volume() > box.Volume();
    }
    
private:
    double length; // length of a box
    double breadth; // breadth of a box
    double height; // Height of a box
};



int main(int argc, const char * argv[]) {
    
    
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);
    
    if (Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1" <<endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" <<endl;
    }
    
    return 0;
}

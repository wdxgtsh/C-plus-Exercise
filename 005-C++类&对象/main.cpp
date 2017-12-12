//
//  main.cpp
//  005-C++类&对象
//
//  Created by zhaolei on 2017/12/12.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

#include <iostream>
using namespace std;

class Box
{
private:
    double height;   // 盒子的高度
public:
    double length;  // 盒子的长度
    double breadth; // 盒子的宽度
    double getVolume(void);// 返回体积
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
//    double getVolume(void)
//    {
//        return length * breadth * heigh;
//    }
};

double Box::getVolume(void) {
    return length * breadth * height;
}

void Box::setLength (double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}


int main(int argc, const char * argv[]) {
    
    Box Box1;
    Box1.setHeight(5.0);
    Box1.length = 6.0;
    Box1.breadth = 7.0;
    
    cout << "Box1 的体积是:" << Box1.getVolume() << endl;
    
    return 0;
}

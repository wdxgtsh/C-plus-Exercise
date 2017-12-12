//
//  main.cpp
//  004-C++数据结构
//
//  Created by zhaolei on 2017/12/4.
//  Copyright © 2017年 zhaolei. All rights reserved.
//

#include <iostream>

using namespace std;

void printBook (struct Books * book);

// 结构体  books
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

int main(int argc, const char * argv[]) {
    
    Books Book1;
    Books Book2;
    
    strcpy(Book1.title, "C++ 教程");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "编程语言");
    Book1.book_id = 12345;
    
    strcpy(Book2.title, "C++ 教程 +++");
    strcpy(Book2.author, "Runoob +++");
    strcpy(Book2.subject, "编程语言 +++");
    Book2.book_id = 123456;

    // 输出 Book1 信息
    printBook(&Book1);
    
    // 输出 Book2 信息
    printBook(&Book2);
    
    return 0;
}

//void printBook (struct Books book) {
//    cout << "书标题 : " << book.title <<endl;
//    cout << "书作者 : " << book.author <<endl;
//    cout << "书类目 : " << book.subject <<endl;
//    cout << "书 ID : " << book.book_id <<endl;
//}

void printBook( struct Books *book) {
    cout << "书标题 : " << book->title <<endl;
    cout << "书作者 : " << book->author <<endl;
    cout << "书类目 : " << book->subject <<endl;
    cout << "书 ID : " << book->book_id <<endl;
}


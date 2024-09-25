//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

class MyClass {
private:
    int *data;  // 动态分配内存，用于深拷贝
    int id;     // 标识符，用于区分不同的对象

public:
    // 默认构造函数
    MyClass(int value = 0, int id = 0);

    // 默认拷贝构造函数（编译器提供的浅拷贝）
    MyClass(const MyClass &other) = default;

    // 自定义拷贝构造函数，进行深拷贝
    MyClass(MyClass &other, bool deepCopy);

    // 赋值运算符重载，进行深拷贝
    MyClass &operator=(const MyClass &other);

    // 析构函数，释放动态内存
    ~MyClass();

    // 打印当前对象的信息
    void print() const;

    // 获取数据指针的值
    int getValue() const;
};

#endif

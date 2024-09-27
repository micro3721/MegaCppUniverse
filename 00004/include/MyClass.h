//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询
#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <memory>

class MyClass {
private:
    std::unique_ptr<int> uniqueData; // 使用 unique_ptr 管理动态内存
    std::shared_ptr<int> sharedData;  // 使用 shared_ptr 管理动态内存
    int id;                          // 标识符，用于区分不同的对象

public:
    // 默认构造函数
    MyClass(int uniqueValue = 0, int sharedValue = 0, int id = 0);

    // 拷贝构造函数（深拷贝）
    MyClass(const MyClass &other);

    // 赋值运算符重载
    MyClass &operator=(const MyClass &other);

    // 析构函数，unique_ptr 和 shared_ptr 会自动释放内存
    ~MyClass();

    // 打印当前对象的信息
    void print() const;

    // 获取数据指针的值
    int getUniqueValue() const;

    int getSharedValue() const;
};

#endif


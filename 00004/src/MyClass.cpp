//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询


#include "MyClass.h"

// 默认构造函数
MyClass::MyClass(int value, int identifier) : id(identifier) {
    data = new int(value);
    std::cout << "Constructor called for object with ID: " << id << ", value: " << *data << std::endl;
}

// 自定义拷贝构造函数，支持深拷贝和浅拷贝
MyClass::MyClass(MyClass &other, bool deepCopy) {
    id = other.id + 1;  // 新对象的 ID 不同，以便于区分

    if (deepCopy) {
        // 深拷贝
        data = new int(*other.data); // 分配新内存并拷贝数据
        std::cout << "Deep Copy Constructor called for object with ID: " << id << std::endl;
    } else {
        // 浅拷贝
        data = other.data;  // 指向同一块内存
        std::cout << "Shallow Copy Constructor called for object with ID: " << id << std::endl;
    }
}

// 赋值运算符重载，进行深拷贝
MyClass &MyClass::operator=(const MyClass &other) {
    if (this == &other) {
        return *this;  // 自赋值保护
    }

    // 释放旧数据
    delete data;

    // 深拷贝
    data = new int(*other.data);
    id = other.id;  // 复制标识符

    std::cout << "Assignment operator called. ID: " << id << std::endl;
    return *this;
}

// 析构函数
MyClass::~MyClass() {
    std::cout << "Destructor called for object with ID: " << id << std::endl;
    delete data;
}

// 打印对象信息
void MyClass::print() const {
    std::cout << "Object with ID: " << id << " has value: " << *data << std::endl;
}

// 获取数据值
int MyClass::getValue() const {
    return *data;
}

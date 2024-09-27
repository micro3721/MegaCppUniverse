//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#include "MyClass.h"

// 默认构造函数
MyClass::MyClass(int uniqueValue, int sharedValue, int identifier)
        : id(identifier), uniqueData(std::make_unique<int>(uniqueValue)),
          sharedData(std::make_shared<int>(sharedValue)) {
    std::cout << "Constructor called for object with ID: " << id
              << ", unique value: " << *uniqueData
              << ", shared value: " << *sharedData << std::endl;
}

// 拷贝构造函数（深拷贝）
MyClass::MyClass(const MyClass &other)
        : id(other.id), uniqueData(std::make_unique<int>(*other.uniqueData)), sharedData(other.sharedData) {
    std::cout << "Copy Constructor called for object with ID: " << id << std::endl;
}

// 赋值运算符重载
MyClass &MyClass::operator=(const MyClass &other) {
    if (this == &other) {
        return *this; // 自赋值保护
    }

    id = other.id; // 复制标识符
    uniqueData = std::make_unique<int>(*other.uniqueData); // 深拷贝
    sharedData = other.sharedData; // 共享指向同一内存

    std::cout << "Assignment operator called. ID: " << id << std::endl;
    return *this;
}

// 析构函数，unique_ptr 和 shared_ptr 会自动释放内存
MyClass::~MyClass() {
    std::cout << "Destructor called for object with ID: " << id << std::endl;
}

// 打印对象信息
void MyClass::print() const {
    std::cout << "Object with ID: " << id
              << " has unique value: " << *uniqueData
              << " and shared value: " << *sharedData << std::endl;
}

// 获取 uniqueData 的值
int MyClass::getUniqueValue() const {
    return *uniqueData;
}

// 获取 sharedData 的值
int MyClass::getSharedValue() const {
    return *sharedData;
}


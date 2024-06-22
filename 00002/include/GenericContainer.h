/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */

#ifndef GENERICCONTAINER_H
#define GENERICCONTAINER_H

#include <iostream>
#include <string>

// 基本的模板类
template<typename T>
class GenericContainer {
private:
    T value;
public:
    // 构造函数
    GenericContainer(T value);

    // 获取值的方法
    T getValue() const;

    // 设置值的方法
    void setValue(T value);

    // 打印值的方法
    void printValue() const;
};

// 模板类的成员函数定义
template<typename T>
GenericContainer<T>::GenericContainer(T value) : value(value) {}

template<typename T>
T GenericContainer<T>::getValue() const {
    return value;
}

template<typename T>
void GenericContainer<T>::setValue(T value) {
    this->value = value;
}

template<typename T>
void GenericContainer<T>::printValue() const {
    std::cout << "Value: " << value << std::endl;
}

// 模板特化 - 针对std::string类型
template<>
class GenericContainer<std::string> {
private:
    std::string value;
public:
    // 构造函数
    GenericContainer(std::string value);

    // 获取值的方法
    std::string getValue() const;

    // 设置值的方法
    void setValue(std::string value);

    // 打印值的方法
    void printValue() const;
};

#endif // GENERICCONTAINER_H

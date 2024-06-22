/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */

#ifndef COLLECTION_H
#define COLLECTION_H

#include <vector>
#include <iostream>

// 成员函数模板
template<typename T>
class Collection {
private:
    std::vector<T> elements;
public:
    // 添加元素的方法
    void addElement(T element);

    // 打印所有元素的方法
    void printElements() const;

    // 查找元素的模板方法
    template<typename U>
    bool contains(const U &value) const;
};

// 成员函数模板定义
template<typename T>
void Collection<T>::addElement(T element) {
    elements.push_back(element);
}

template<typename T>
void Collection<T>::printElements() const {
    for (const auto &element: elements) {
        std::cout << element << std::endl;
    }
}

template<typename T>
template<typename U>
bool Collection<T>::contains(const U &value) const {
    for (const auto &element: elements) {
        if (element == value) {
            return true;
        }
    }
    return false;
}

#endif // COLLECTION_H

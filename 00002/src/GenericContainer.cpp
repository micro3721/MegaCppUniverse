/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */

#include "GenericContainer.h"

// 模板特化类的成员函数定义
GenericContainer<std::string>::GenericContainer(std::string value) : value(value) {}

std::string GenericContainer<std::string>::getValue() const {
    return value;
}

void GenericContainer<std::string>::setValue(std::string value) {
    this->value = value;
}

void GenericContainer<std::string>::printValue() const {
    std::cout << "String Value: " << value << std::endl;
}

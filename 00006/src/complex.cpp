//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#include "complex.h"
#include <cmath>

// ComplexNumber 的构造函数
ComplexNumber::ComplexNumber(double real, double imag) : realPart(real), imaginaryPart(imag) {}

// 友元函数 operator<< 的实现
std::ostream &operator<<(std::ostream &out, const ComplexNumber &complex) {
    out << "(" << complex.realPart << " + " << complex.imaginaryPart << "i)";
    return out;
}

// 运算符重载：加法
ComplexNumber ComplexNumber::operator+(const ComplexNumber &other) const {
    return ComplexNumber(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
}

// 计算复数的模长
double ComplexNumber::getMagnitude() const {
    return std::sqrt(realPart * realPart + imaginaryPart * imaginaryPart);
}

// 计算加权模长
double ComplexNumber::getMagnitudeWithFactor(double factor) const {
    return getMagnitude() * factor;
}

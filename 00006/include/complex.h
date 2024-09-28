
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

// 表示复数的类
class ComplexNumber {
private:
    double realPart;
    double imaginaryPart;

public:
    ComplexNumber(double real = 0.0, double imag = 0.0);  // 构造函数

    friend std::ostream &operator<<(std::ostream &out, const ComplexNumber &complex);  // 友元函数输出复数

    ComplexNumber operator+(const ComplexNumber &other) const;  // 运算符重载：加法
    double getMagnitude() const;  // 计算复数模长
    double getMagnitudeWithFactor(double factor) const;  // 加权模长
};

#endif  // COMPLEX_H

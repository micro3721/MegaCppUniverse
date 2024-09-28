//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#include "shape.h"
#include <iostream>
#include <cmath>

// 基类 Shape 的构造函数
Shape::Shape(const std::string &name) : shapeName(name) {}

// Shape 的虚函数实现
double Shape::calculateArea() const {
    return 0.0;  // 默认返回 0，派生类可重载
}

// Circle 的构造函数
Circle::Circle(double r) : Shape("Circle"), radius(r) {}

// Circle 的 draw 函数实现
void Circle::draw() const {
    std::cout << "Drawing " << shapeName << " with radius: " << radius << '\n';
}

// Circle 的 calculateArea 函数实现
double Circle::calculateArea() const {
    return 3.14159 * radius * radius;  // 计算圆的面积
}

// Circle 的 calculateCircumference 函数实现
double Circle::calculateCircumference() const {
    return 2 * 3.14159 * radius;  // 计算圆周长
}

// Rectangle 的构造函数
Rectangle::Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

// Rectangle 的 draw 函数实现
void Rectangle::draw() const {
    std::cout << "Drawing " << shapeName << " with width: " << width << " and height: " << height << '\n';
}

// Rectangle 的 calculateArea 函数实现
double Rectangle::calculateArea() const {
    return width * height;  // 计算矩形的面积
}

// Rectangle 的 calculatePerimeter 函数实现
double Rectangle::calculatePerimeter() const {
    return 2 * (width + height);  // 计算矩形的周长
}

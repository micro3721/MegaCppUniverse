#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

// 抽象基类 Shape
class Shape {
protected:
    std::string shapeName;

public:
    Shape(const std::string &name);  // 构造函数

    virtual void draw() const = 0;  // 纯虚函数：绘制形状
    virtual double calculateArea() const;  // 虚函数：计算面积
    virtual ~Shape() = default;  // 虚析构函数
};

// 派生类 Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);  // 构造函数
    void draw() const override;  // 重写纯虚函数
    double calculateArea() const override;  // 重写虚函数
    double calculateCircumference() const;  // 计算圆周长
};

// 派生类 Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h);  // 构造函数
    void draw() const override;  // 重写纯虚函数
    double calculateArea() const override;  // 重写虚函数
    double calculatePerimeter() const;  // 计算矩形的周长
};

#endif  // SHAPE_H

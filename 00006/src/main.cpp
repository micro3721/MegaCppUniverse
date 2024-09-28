//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#include "shape.h"
#include "complex.h"
#include "utility.h"
#include <vector>
#include <memory>

int main() {
    // 检查模板参数是否为引用类型
    int number = 10;
    int &numberReference = number;
    checkIfReferenceType(number);       // 输出 false
    checkIfReferenceType(numberReference);    // 输出 false
    checkIfReferenceType<int &>(number); // 输出 true

    std::cout << "\n";

    // 递归处理可变参数模板
    printParamsRecursively("Hello", 42, 3.14, 'A');

    std::cout << "\n";

    // 函数重载测试
    ComplexNumber complex1(3.0, 4.0);
    ComplexNumber complex2(1.0, 2.0);

    // 友元函数 和 运算符重载测试
    std::cout << "Complex Number 1: " << complex1 << '\n';
    std::cout << "Complex Number 2: " << complex2 << '\n';

    ComplexNumber complexSum = complex1 + complex2;
    std::cout << "Sum of Complex Numbers: " << complexSum << '\n';

    // 重载函数调用
    std::cout << "Magnitude of Complex Number 1: " << complex1.getMagnitude() << '\n';
    std::cout << "Magnitude of Complex Number 1 with factor 2: " << complex1.getMagnitudeWithFactor(2.0) << '\n';

    std::cout << "\n";

    // 使用智能指针处理 Shape 对象
    std::vector<std::shared_ptr<Shape>> shapes;
    shapes.push_back(std::make_shared<Circle>(5.0));
    shapes.push_back(std::make_shared<Rectangle>(3.0, 4.0));

    for (const auto &shape: shapes) {
        shape->draw();  // 多态：动态调用派生类的 draw 方法
        std::cout << "Area: " << shape->calculateArea() << '\n';

        // 处理具体派生类的操作
        if (auto circle = std::dynamic_pointer_cast<Circle>(shape)) {
            std::cout << "Circumference: " << circle->calculateCircumference() << '\n';
        } else if (auto rectangle = std::dynamic_pointer_cast<Rectangle>(shape)) {
            std::cout << "Perimeter: " << rectangle->calculatePerimeter() << '\n';
        }

        std::cout << "\n";
    }

    return 0;
}

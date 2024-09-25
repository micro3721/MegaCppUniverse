//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#include "MyClass.h"

int main() {
    // 创建原始对象
    MyClass obj1(100, 1);
    obj1.print();

    // 使用编译器提供的默认浅拷贝
    MyClass obj2 = obj1;
    obj2.print();

    // 自定义浅拷贝构造函数
    MyClass obj3(obj1, false);  // 浅拷贝
    obj3.print();

    // 自定义深拷贝构造函数
    MyClass obj4(obj1, true);   // 深拷贝
    obj4.print();

    // 使用赋值运算符重载
    MyClass obj5;
    obj5 = obj1;   // 深拷贝赋值
    obj5.print();

    return 0;
}

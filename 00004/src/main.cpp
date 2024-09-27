//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#include "MyClass.h"

int main() {
    // 创建原始对象
    MyClass obj1(100, 200, 1);
    obj1.print();

    // 使用拷贝构造函数（深拷贝）
    MyClass obj2 = obj1;
    obj2.print();

    // 直接使用赋值运算符
    MyClass obj3(0, 0, 3);
    obj3 = obj1;  // 深拷贝和共享指向同一内存
    obj3.print();

    // 另一个赋值实例
    MyClass obj4(50, 60, 4);
    obj4 = obj2;  // 深拷贝和共享指向同一内存
    obj4.print();

    return 0;
}


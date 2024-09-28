//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询


#include "book_manager.h"

// 显示可用的书籍
void showAvailableBooks(const Library &library) {
    library.displayBooks();
}

// 演示数字图书馆功能
void demonstrateDigitalLibrary() {
    DigitalLibrary digitalLib;
    digitalLib.addEBook("C++ Primer");
    digitalLib.addEBook("Effective Modern C++");
    digitalLib.addEBook("Clean Code");

    cout << "Checking available books in Digital Library:" << endl;
    showAvailableBooks(digitalLib);

    // 查找特定书籍
    string bookToFind = "C++ Primer";
    if (digitalLib.findBook(bookToFind)) {
        cout << "Found the book: " << bookToFind << endl;
    } else {
        cout << "Book not found: " << bookToFind << endl;
    }
}

// 演示模板别名 VecPtr
void demonstrateVecPtr() {
    VecPtr<int> intVec = new vector<int>{1, 2, 3, 4, 5};
    cout << "Vector of integers using VecPtr: ";
    for (const auto &num: *intVec) {
        cout << num << " ";
    }
    cout << endl;
    delete intVec;  // 释放动态分配的内存
}

// 演示类型推导与约束
void demonstrateTypeAliasAndConstraint() {
    DigitalLibrary digitalLib;
    addSpecialBook(digitalLib, string("Design Patterns"));  // 允许
    // addSpecialBook(digitalLib, 42);  // 错误，int 不是 string
    showAvailableBooks(digitalLib);
}

int main() {
    // 演示数字图书馆
    demonstrateDigitalLibrary();

    // 演示模板别名 VecPtr
    demonstrateVecPtr();

    // 演示类型推导与约束
    cout << "Demonstrating type alias and constraint:" << endl;
    demonstrateTypeAliasAndConstraint();
    return 0;
}


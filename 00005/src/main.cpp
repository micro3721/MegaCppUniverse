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

int main() {
    // 演示数字图书馆
    demonstrateDigitalLibrary();

    return 0;
}


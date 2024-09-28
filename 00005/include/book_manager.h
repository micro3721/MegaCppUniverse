//  Author: github.com/micro3721
//  E-mail: mysolution@qq.com
//  Provide software outsourcing services
//  我承接软件定制开发服务,欢迎垂询

#ifndef BOOK_MANAGER_H
#define BOOK_MANAGER_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <type_traits>

// 使用命名空间
using std::cout;
using std::endl;
using std::vector;
using std::string;

// 类型别名
using BookList = vector<string>;

// 模板别名
template<typename T>
using VecPtr = vector<T> *;


// 类型推导与约束
template<typename T>
using EnableIfString = typename std::enable_if<std::is_same<T, string>::value>::type;  // 仅允许类型为 string

// 基类
class Library {
public:
    void addBook(const string &book) {
        books.push_back(book);
    }

    void displayBooks() const {
        cout << "Books in library:" << endl;
        for (const auto &book: books) {
            cout << " - " << book << endl;
        }
    }

    bool findBook(const string &book) const {
        return std::find(books.begin(), books.end(), book) != books.end();
    }

protected:
    BookList books;  // 图书列表
};

// 派生类
class DigitalLibrary : public Library {
public:
    using Library::addBook;  // 引入基类的 addBook 方法

    void addEBook(const string &ebook) {
        addBook(ebook);  // 使用基类方法添加电子书
        cout << "E-Book added: " << ebook << endl;
    }
};

// 函数声明
void showAvailableBooks(const Library &library);

void demonstrateDigitalLibrary();


// 使用模板别名处理动态分配的 vector
void demonstrateVecPtr();

// 展示类型推导与约束的功能
template<typename T, typename = EnableIfString<T>>
void addSpecialBook(DigitalLibrary &lib, const T &book) {
    lib.addEBook(book);
}

#endif // BOOK_MANAGER_H



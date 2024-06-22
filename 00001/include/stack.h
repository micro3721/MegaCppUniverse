/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */


#ifndef INC_STACK_H
#define INC_STACK_H

#include <vector>

template<typename Type>
class Stack {
private:
    std::vector<Type> items; // holds Stack items
    int size;                // size of the stack
public:
    explicit Stack(int ss = 10);

    bool isEmpty() const;

    bool isFull() const;

    bool push(const Type &item);   // add item to Stack
    bool pop(Type &item);          // pop top into item
};

template<typename Type>
Stack<Type>::Stack(int ss) : size(ss) {}

template<typename Type>
bool Stack<Type>::isEmpty() const {
    return items.empty();
}

template<typename Type>
bool Stack<Type>::isFull() const {
    return items.size() == size;
}

template<typename Type>
bool Stack<Type>::push(const Type &item) {
    if (items.size() < size) {
        items.push_back(item);
        return true;
    } else {
        return false;
    }
}

template<typename Type>
bool Stack<Type>::pop(Type &item) {
    if (!items.empty()) {
        item = items.back();
        items.pop_back();
        return true;
    } else {
        return false;
    }
}

#endif //INC_STACK_H


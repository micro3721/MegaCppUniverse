#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
#include <type_traits>

// 模板参数是否为引用类型的检查 (函数声明和定义必须在头文件中)
template<typename T>
void checkIfReferenceType(T value) {
    std::cout << "Is reference type: " << std::is_reference_v<T> << '\n';
}

// 函数声明：递归终止条件，无参数
void printRemainingParams();

// 递归处理可变参数模板的声明
template<typename T, typename... Args>
void printParamsRecursively(T firstParam, Args... remainingParams) {
    std::cout << "Parameter: " << firstParam << ", Remaining count: " << sizeof...(remainingParams) << '\n';
    if constexpr (sizeof...(remainingParams) > 0) {
        printParamsRecursively(remainingParams...);
    } else {
        printRemainingParams();  // 递归终止时调用无参数版本
    }
}

#endif  // UTILITY_H

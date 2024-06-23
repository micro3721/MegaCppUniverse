/**
 * Author: github.com/micro3721
 * E-mail: mysolution@qq.com
 * Provide software outsourcing services
 * 我承接软件定制开发服务,欢迎垂询
 */


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// 定义返回指针的函数（指针函数）
int *createArray(int size);

int **createMatrix(int rows, int cols);

// 定义几种数学运算函数
int add(int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);

// 定义一个函数指针类型，用于指向不同的数学运算函数
typedef int (*MathOperation)(int, int);

// 函数指针作为参数的函数
void executeOperation(MathOperation operation, int a, int b);

// 定义函数指针作为返回值的函数（指针函数和函数指针的结合）
MathOperation getOperation(char op);

#endif // FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// 实现返回指针的函数（指针函数）
int *createArray(int size) {
    int *array = (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    return array;
}

int **createMatrix(int rows, int cols) {
    int **matrix = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j + 1;
        }
    }
    return matrix;
}

// 实现数学运算函数
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

// 实现函数指针作为参数的函数
void executeOperation(MathOperation operation, int a, int b) {
    int result = operation(a, b);
    printf("Result: %d\n", result);
}

// 实现返回函数指针的函数（指针函数和函数指针的结合）
MathOperation getOperation(char op) {
    switch (op) {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            return NULL;
    }
}

int main() {
    // 使用指针函数创建并打印数组
    int size = 5;
    int *array = createArray(size);
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);

    // 使用指针函数创建并打印矩阵
    int rows = 3, cols = 3;
    int **matrix = createMatrix(rows, cols);
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        free(matrix[i]);
    }
    free(matrix);

    // 使用函数指针执行不同的操作
    MathOperation operation;

    // 动态获取操作函数并执行
    char ops[] = {'+', '-', '*', '/'};
    int a = 10, b = 5;
    for (int i = 0; i < 4; i++) {
        operation = getOperation(ops[i]);
        if (operation != NULL) {
            printf("Operation %c: ", ops[i]);
            executeOperation(operation, a, b);
        } else {
            printf("Invalid operation: %c\n", ops[i]);
        }
    }

    return 0;
}

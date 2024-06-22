### 代码结构

1. **GenericContainer.h**：包含 `GenericContainer` 类模板的声明和通用成员函数的定义，以及模板特化类的声明。
2. **GenericContainer.cpp**：包含 `GenericContainer` 类模板特化成员函数的定义。
3. **Collection.h**：包含 `Collection` 类模板及其成员函数模板的声明和定义。
4. **main.cpp**：包含 `main` 函数，用于测试和展示模板类的用法。



### 代码解析

1. **基本的模板类 `GenericContainer`**:
   - `template <typename T>` 定义了一个通用容器类。
   - 构造函数、获取值、设置值和打印值的方法。
2. **模板特化**:
   - `template <> class GenericContainer<std::string>` 针对 `std::string` 类型进行了特化，实现了不同的 `printValue` 方法。
3. **成员函数模板 `Collection`**:
   - `template <typename T>` 定义了一个集合类，用于存储类型为 `T` 的元素。
   - `template <typename U>` 成员函数模板，用于查找元素。
4. **`main` 函数**:
   - 展示了如何使用模板类 `GenericContainer` 和 `Collection`，并调用其成员函数。
   
   


### Code Structure

1. **GenericContainer.h**: Contains the declaration of the `GenericContainer` class template and the definition of its general member functions, as well as the declaration of the template specialization class.
2. **GenericContainer.cpp**: Contains the definition of the `GenericContainer` class template specialization member functions.
3. **Collection.h**: Contains the declaration and definition of the `Collection` class template and its member function templates.
4. **main.cpp**: Contains the `main` function, used to test and demonstrate the usage of the template classes.

### Code Explanation

1. **Basic Template Class `GenericContainer`**:
   - `template <typename T>` defines a generic container class.
   - Constructor, methods to get, set, and print values.
2. **Template Specialization**:
   - `template <> class GenericContainer<std::string>` specializes for the `std::string` type, implementing a different `printValue` method.
3. **Member Function Template `Collection`**:
   - `template <typename T>` defines a collection class to store elements of type `T`.
   - `template <typename U>` member function template to find elements.
4. **`main` Function**:
   - Demonstrates how to use the template classes `GenericContainer` and `Collection`, and how to call their member functions.




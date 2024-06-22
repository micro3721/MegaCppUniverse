cmake_minimum_required(VERSION 3.25)

# 获取当前目录名作为项目名
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME})

# 设置C++标准
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 自动添加src目录中的所有源文件
file(GLOB_RECURSE SRC_FILES src/*.cpp)

# 定义一个宏来简化添加源文件和头文件目录的过程
macro(add_project_executable)
    add_executable(${PROJECT_NAME} ${SRC_FILES})
    target_include_directories(${PROJECT_NAME} PRIVATE include)
endmacro()

# 使用宏添加可执行文件
add_project_executable()

message(STATUS "Current source dir: ${CMAKE_CURRENT_SOURCE_DIR}")

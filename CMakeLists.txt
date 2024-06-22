cmake_minimum_required(VERSION 3.25)

# 设置顶层项目名称
project(MegaCppUniverse)

# 设置全局C++标准
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 遍历所有子项目并包含它们的CMakeLists.txt
file(GLOB_RECURSE SUBPROJECTS RELATIVE ${CMAKE_SOURCE_DIR} */CMakeLists.txt)

foreach(subdir ${SUBPROJECTS})
    # 获取子目录名
    get_filename_component(subdir_path ${subdir} PATH)
    add_subdirectory(${subdir_path})
endforeach()

# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(stack)

# 设置
set(CMAKE_CXX_STANDARD 11)

# 编译源码生成目标
add_executable(stack src/array_stack.cc)
add_executable(linkListStack ./src/linkedlist_stack.cc)

add_executable(arrayQueue ./src/array_queue.cc)

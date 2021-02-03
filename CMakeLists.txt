cmake_minimum_required(VERSION 3.17)
project(C_learn)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_learn
        sizeof关键字.cpp
        数据类型-字符串类型.cpp
        数据类型-实型.cpp
        数据类型-布尔类型.cpp
        数据类型-数据的输入.cpp
        数据类型-转义字符.cpp
        数据类型.cpp
        运算符-算数运算符-加减乘除的运算.cpp
        运算符-算数运算符-取模运算.cpp
        运算符-算数运算符-递增递减.cpp
        运算符-赋值运算符.cpp)

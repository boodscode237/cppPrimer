cmake_minimum_required(VERSION 3.21)
project(cppPrimer)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppPrimer main.cpp carrot.cpp)

add_executable(carrot carrot.cpp)
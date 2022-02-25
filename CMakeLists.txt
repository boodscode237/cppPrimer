cmake_minimum_required(VERSION 3.21)
project(cppPrimer)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppPrimer main.cpp carrot.cpp getinfo.cpp sqrt.cpp ourfunc.cpp convert.cpp)

add_executable(carrot carrot.cpp)
add_executable(getinfo getinfo.cpp)
add_executable(sqrt sqrt.cpp)
add_executable(ourfunc ourfunc.cpp)
add_executable(convert convert.cpp)
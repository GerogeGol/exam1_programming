cmake_minimum_required(VERSION 3.24)
project(Task_1)

set(CMAKE_CXX_STANDARD 17)

add_library(Lib SHARED lib.cpp)

add_executable(Task_1 main.cpp)

target_link_libraries(Task_1 Lib)

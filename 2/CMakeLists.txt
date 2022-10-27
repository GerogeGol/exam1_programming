cmake_minimum_required(VERSION 3.0.0)
project(Task_2 VERSION 0.1.0)

add_executable(Task_2 main.cpp)
add_library(Lib lib.cpp)

target_link_libraries(Task_2 Lib)

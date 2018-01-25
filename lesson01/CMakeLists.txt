project(lesson01)
cmake_minimum_required(VERSION 2.8)

set(target lesson01)

add_executable(${target} lesson01.cpp)
target_link_libraries(${target} SDL2)

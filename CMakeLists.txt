cmake_minimum_required(VERSION 3.12)
project(blog_contest)

set(CMAKE_CXX_STANDARD 14)


add_subdirectory(string)


add_executable(string_test string_test.cpp)
target_link_libraries(string_test PRIVATE string)

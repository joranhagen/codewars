cmake_minimum_required(VERSION 3.25)
project(c C)

set(CMAKE_C_STANDARD 23)

add_executable(c main.c solutions.h solutions.c)
target_compile_options(c PRIVATE -fsanitize=address)
target_link_options(c PRIVATE -fsanitize=address)
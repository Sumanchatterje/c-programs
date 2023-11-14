cmake_minimum_required(VERSION 3.26)
project(c_programs C)

set(CMAKE_C_STANDARD 23)

add_executable(c_programs main.c
        hello.c
        hello.h
        42.c
        47.c
        60.c)

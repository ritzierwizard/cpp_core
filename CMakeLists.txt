cmake_minimum_required(VERSION 4.3)
project(cpp_core CXX)

set(CMAKE_CXX_STANDARD 23)

include_directories(core)

add_compile_options(
        -std=gnu++23
        -fno-exceptions
        -fwrapv
        -Wall
        -Wextra
        -Wpedantic
        -Werror
        -Wno-unused-variable
        -fno-delete-null-pointer-checks
)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -Og")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")

add_executable(cpp_core
        main.cpp
        core/types.h
        core/utils.h
        core/array.h
        core/mem.h)

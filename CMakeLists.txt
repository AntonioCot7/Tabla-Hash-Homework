cmake_minimum_required(VERSION 3.28)
project(TablasHash_LAB_AED)

set(CMAKE_CXX_STANDARD 17)

add_executable(TablasHash_LAB_AED main.cpp
        hash_table_chaining.h
        hash_table_open_adressing.h)

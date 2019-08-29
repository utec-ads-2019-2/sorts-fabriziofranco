cmake_minimum_required(VERSION 3.14)
project(sorts_fabriziofranco)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sorts_fabriziofranco
        bubble.h
        counting.h
        insert.h
        main.cpp
        merge.h
        mocker.cpp
        mocker.h
        quick.h
        radix.h
        select.h
        shell.h
        sort.h
        tester.cpp
        tester.h)

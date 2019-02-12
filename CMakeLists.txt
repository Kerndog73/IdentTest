cmake_minimum_required(VERSION 3.8)
project(IdentTest)

set(CMAKE_CXX_STANDARD 11)

add_library(dynlib0 SHARED
    dynlib0.cpp
)
add_library(dynlib1 SHARED
    dynlib1.cpp
)
add_library(stalib0 STATIC
    stalib0.cpp
)
add_library(stalib1 STATIC
    stalib1.cpp
)

add_executable(test
    main.cpp
    exec_tu.cpp
)

target_link_libraries(test
    dynlib0
    dynlib1
    stalib0
    stalib1
)
cmake_minimum_required(VERSION 3.8)
project(TP)

set(CMAKE_CXX_STANDARD 17)



if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()


enable_testing()
add_subdirectory(lib)
add_subdirectory(code)

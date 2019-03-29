cmake_minimum_required(VERSION 3.8)
project(TP)

set(CMAKE_CXX_STANDARD 17)



if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()


enable_testing()
add_subdirectory(lib)
add_subdirectory(code)

add_executable(
        army_tests
        ${CMAKE_CURRENT_LIST_DIR}/code/main.cpp
        ${CMAKE_CURRENT_LIST_DIR}/code/Army/test/test.cpp
)

target_include_directories(
        army_tests
        PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/code/Army/src/headers"
        "${gtest_SOURCE_DIR}/include"
        "${gtest_SOURCE_DIR}"
        "${CMAKE_CURRENT_LIST_DIR}/code/Army/src/headers/Factory"
        "${CMAKE_CURRENT_LIST_DIR}/code/Army/src/headers/Hero"
)


target_link_libraries(
        army_tests
        army
        gtest
        gtest_main
)

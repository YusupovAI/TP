CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set("gtest_SOURCE_DIR" "../../googletest-master/googletest")



add_executable(
        army_tests
        main.cpp
        test.cpp
)

target_include_directories(
        army_tests
        PUBLIC
            "${CMAKE_CURRENT_LIST_DIR}/../src"
            "${gtest_SOURCE_DIR}/include"
            "${gtest_SOURCE_DIR}"
)


target_link_libraries(
        army_tests
        armyfactory
        gtest
        gtest_main
)


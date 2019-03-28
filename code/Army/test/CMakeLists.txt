CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set("gtest_SOURCE_DIR" "../../../lib/googletest-master/googletest")



add_executable(
        army_tests
        main.cpp
        test.cpp
)

target_include_directories(
        army_tests
        PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/../src/headers"
            "${gtest_SOURCE_DIR}/include"
            "${gtest_SOURCE_DIR}"
        "${CMAKE_CURRENT_LIST_DIR}/../src/headers/Factory"
        "${CMAKE_CURRENT_LIST_DIR}/../src/headers/Hero"
)


target_link_libraries(
        army_tests
        army
        gtest
        gtest_main
)








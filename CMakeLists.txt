cmake_minimum_required(VERSION 3.8)
project(Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

set(SFML_PATH "${CMAKE_CURRENT_SOURCE_DIR}/lib/SFML")
set(SFML_LIB "${SFML_PATH}/lib")
set(SFML_INCLUDE "${SFML_PATH}/include")
set(SFML_BIN "${SFML_PATH}/bin")

add_library(sfml-graphics STATIC IMPORTED)
set_property(TARGET sfml-graphics PROPERTY IMPORTED_LOCATION "${SFML_LIB}/libsfml-graphics.a")
add_library(sfml-window STATIC IMPORTED)
set_property(TARGET sfml-window PROPERTY IMPORTED_LOCATION "${SFML_LIB}/libsfml-window.a")
add_library(sfml-system STATIC IMPORTED)
set_property(TARGET sfml-system PROPERTY IMPORTED_LOCATION "${SFML_LIB}/libsfml-system.a")


target_link_libraries(${PROJECT_NAME}  sfml-graphics sfml-window sfml-system )




if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()


enable_testing()
add_subdirectory(lib)
add_subdirectory(code)

add_executable(
        army_tests
        ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

target_include_directories(
        ${PROJECT_NAME}
        PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/code/Army/src/headers"
        "${gtest_SOURCE_DIR}/include"
        "${gtest_SOURCE_DIR}"
        "${CMAKE_CURRENT_LIST_DIR}/code/Army/src/headers/Factory"
        "${CMAKE_CURRENT_LIST_DIR}/code/Army/src/headers/Hero"
	"${SFML_INCLUDE}"
)


target_link_libraries(
        army_tests
        army
        gtest
        gtest_main
	sfml-graphics 
	sfml-window 
	sfml-system
)

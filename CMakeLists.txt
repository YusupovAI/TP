cmake_minimum_required(VERSION 2.9)
project(Game)

set(PROJECT_NAME Game)
set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/code/main.cpp")

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




enable_testing()
add_subdirectory(lib)
add_subdirectory(code)


target_include_directories(
        "${PROJECT_NAME}"
        PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army/src/headers"
        "${gtest_SOURCE_DIR}/include"
        "${gtest_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army/src/headers/Factory"
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army/src/headers/Hero"
	"${SFML_INCLUDE}"
)


target_link_libraries(
	"${PROJECT_NAME}"
        army
	sfml-graphics 
	sfml-window 
	sfml-system
)

set(TEST_PROJECT test)
add_executable(${TEST_PROJECT} "")
target_sources(
	${TEST_PROJECT}
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/tests/army_test.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/tests/main.cpp
	)
target_include_directories(
	"${TEST_PROJECT}"
        PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army/src/headers"
        "${gtest_SOURCE_DIR}/include"
        "${gtest_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army/src/headers/Factory"
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army/src/headers/Hero"
	"${CMAKE_CURRENT_SOURCE_DIR}/code/Army"
)
target_link_libraries(
	"${TEST_PROJECT}"
        army
        gtest
        gtest_main
	gmock_main
)


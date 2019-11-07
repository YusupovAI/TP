CMAKE_MINIMUM_REQUIRED(VERSION 2.9)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(ARMY_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../Army/include)
add_library(player "")

target_include_directories(
	player
	PUBLIC
	${INCLUDE_DIR}
	${ARMY_INCLUDE_DIR}
	)

target_sources(
	player
	PUBLIC
	${SOURCE_DIR}/Player.cpp
	)


target_link_libraries(
	player
	army
	)

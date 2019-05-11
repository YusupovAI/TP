CMAKE_MINIMUM_REQUIRED(VERSION 2.9)

add_library(game "")

set(SFML_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../lib/SFML")
set(SFML_INCLUDE_DIR "${SFML_PATH}/include")

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(ARMY_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../Army/include)

target_include_directories(
	game
	PUBLIC
	${INCLUDE_DIR}
	${PLAYER_INCLUDE_DIR}
	${SFML_INCLUDE_DIR}
	)

target_sources(
	game
	PUBLIC
	${SOURCE_DIR}/Game.cpp
	${SOURCE_DIR}/Painter.cpp
	)


target_link_libraries(
	game
	player
	army
	sfml-window
	sfml-graphics
	sfml-system
	)

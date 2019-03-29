add_subdirectory(Army)

CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set("gtest_SOURCE_DIR" "../lib/googletest-master/googletest")

#add_library(player "")

#target_sources(
#        player
#        PRIVATE
#        Player.cpp
#)

#target_include_directories(
#        player
#        PUBLIC
#        ${CMAKE_CURRENT_LIST_DIR}/Army/src/Headers
#        ${CMAKE_CURRENT_LIST_DIR}/Army/src/Headers/Hero
#        ${CMAKE_CURRENT_LIST_DIR}/Army/src/Headers/Factory
#)

#target_link_libraries(
#        player
#        army
#)


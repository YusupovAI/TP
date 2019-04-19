add_library(army "")

target_include_directories(
        army
        PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/..
)

set(FACTORY_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/Factory)
set(HERO_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/Hero)

target_sources(
        army
        PRIVATE
        ${FACTORY_SOURCES_DIR}/HumanFactory.cpp
        ${FACTORY_SOURCES_DIR}/OrcFactory.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Point.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Unit.cpp
        ${HERO_SOURCES_DIR}/Hero.cpp
        ${HERO_SOURCES_DIR}/HeroBuilder.cpp
        ${HERO_SOURCES_DIR}/HeroDirector.cpp
        ${HERO_SOURCES_DIR}/HumanHeroBuilder.cpp
        ${HERO_SOURCES_DIR}/OrcHeroBuilder.cpp
)

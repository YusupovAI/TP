add_library(army "")

target_include_directories(
        army
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/headers/Factory
        ${CMAKE_CURRENT_LIST_DIR}/headers/Hero
        ${CMAKE_CURRENT_LIST_DIR}/headers
)

set(FACTORY_SOURCES_DIR ${CMAKE_CURRENT_LIST_DIR}/Factory)
set(HERO_SOURCES_DIR ${CMAKE_CURRENT_LIST_DIR}/Hero)

target_sources(
        army
        PRIVATE
        ${FACTORY_SOURCES_DIR}/HumanFactory.cpp
        ${FACTORY_SOURCES_DIR}/OrcFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Point.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Unit.cpp
        ${HERO_SOURCES_DIR}/Hero.cpp
        ${HERO_SOURCES_DIR}/HeroBuilder.cpp
        ${HERO_SOURCES_DIR}/HeroDirector.cpp
        ${HERO_SOURCES_DIR}/HumanHeroBuilder.cpp
        ${HERO_SOURCES_DIR}/OrcHeroBuilder.cpp
)
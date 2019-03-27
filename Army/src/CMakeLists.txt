add_library(army "")

target_include_directories(
        army
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)



target_sources(
        army
        PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/HumanFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/OrcFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Point.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Unit.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Hero/Hero.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Hero/HeroBuilder.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Hero/HeroDirector.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Hero/HumanHeroBuilder.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Hero/OrcHeroBuilder.cpp
)
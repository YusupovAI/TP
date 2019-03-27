add_library(army "")

target_include_directories(
        army
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)



target_sources(
        army
        PUBLIC
            ${CMAKE_CURRENT_LIST_DIR}/HumanFactory.h
            ${CMAKE_CURRENT_LIST_DIR}/OrcFactory.h
            ${CMAKE_CURRENT_LIST_DIR}/WarriorFactory.h
            ${CMAKE_CURRENT_LIST_DIR}/Unit.h
            ${CMAKE_CURRENT_LIST_DIR}/Horseman.h
            ${CMAKE_CURRENT_LIST_DIR}/Infantry.h
            ${CMAKE_CURRENT_LIST_DIR}/Mage.h
            ${CMAKE_CURRENT_LIST_DIR}/Point.h
            ${CMAKE_CURRENT_LIST_DIR}/Hero/Hero.h
            ${CMAKE_CURRENT_LIST_DIR}/Hero/HeroBuilder.h
            ${CMAKE_CURRENT_LIST_DIR}/Hero/HeroDirector.h
            ${CMAKE_CURRENT_LIST_DIR}/Hero/HumanHeroBuilder.h
            ${CMAKE_CURRENT_LIST_DIR}/Hero/OrcHeroBuilder.h
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
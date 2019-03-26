add_library(armyfactory "")

target_include_directories(
        armyfactory
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

target_sources(
        armyfactory
        PUBLIC
            ${CMAKE_CURRENT_LIST_DIR}/HumanFactory.h
            ${CMAKE_CURRENT_LIST_DIR}/OrcFactory.h
            ${CMAKE_CURRENT_LIST_DIR}/WarriorFactory.h
            ${CMAKE_CURRENT_LIST_DIR}/Warrior.h
            ${CMAKE_CURRENT_LIST_DIR}/Mage.h
            ${CMAKE_CURRENT_LIST_DIR}/Infantry.h
            ${CMAKE_CURRENT_LIST_DIR}/Catapult.h
            ${CMAKE_CURRENT_LIST_DIR}/OrcMage.h
            ${CMAKE_CURRENT_LIST_DIR}/OrcInfantry.h
            ${CMAKE_CURRENT_LIST_DIR}/OrcCatapult.h
            ${CMAKE_CURRENT_LIST_DIR}/HumanMage.h
            ${CMAKE_CURRENT_LIST_DIR}/HumanInfantry.h
            ${CMAKE_CURRENT_LIST_DIR}/HumanCatapult.h
            ${CMAKE_CURRENT_LIST_DIR}/Point.h
        PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/HumanFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/OrcFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/OrcMage.cpp
            ${CMAKE_CURRENT_LIST_DIR}/OrcInfantry.cpp
            ${CMAKE_CURRENT_LIST_DIR}/OrcCatapult.cpp
            ${CMAKE_CURRENT_LIST_DIR}/HumanMage.cpp
            ${CMAKE_CURRENT_LIST_DIR}/HumanInfantry.cpp
            ${CMAKE_CURRENT_LIST_DIR}/HumanCatapult.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Point.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Warrior.cpp
)

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
        ${CMAKE_CURRENT_LIST_DIR}/Unit.h
            ${CMAKE_CURRENT_LIST_DIR}/Mage/Mage.h
            ${CMAKE_CURRENT_LIST_DIR}/Infantry/Infantry.h
            ${CMAKE_CURRENT_LIST_DIR}/Mage/OrcMage.h
            ${CMAKE_CURRENT_LIST_DIR}/Infantry/OrcInfantry.h
            ${CMAKE_CURRENT_LIST_DIR}/Mage/HumanMage.h
            ${CMAKE_CURRENT_LIST_DIR}/Infantry/HumanInfantry.h
            ${CMAKE_CURRENT_LIST_DIR}/Horseman/Horseman.h
            ${CMAKE_CURRENT_LIST_DIR}/Horseman/HumanHorseman.h
            ${CMAKE_CURRENT_LIST_DIR}/Horseman/OrcHorseman.h
            ${CMAKE_CURRENT_LIST_DIR}/Point.h
        PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/HumanFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/OrcFactory.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Mage/OrcMage.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Infantry/OrcInfantry.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Mage/HumanMage.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Infantry/HumanInfantry.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Horseman/HumanHorseman.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Horseman/OrcHorseman.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Horseman/Horseman.cpp
            ${CMAKE_CURRENT_LIST_DIR}/Point.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Unit.cpp
)
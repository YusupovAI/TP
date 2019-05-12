CMAKE_MINIMUM_REQUIRED(VERSION 2.9)

add_library(army "")

set(SFML_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../lib/SFML")
set(SFML_INCLUDE "${SFML_PATH}/include")



target_include_directories(
        army
        PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/..
	${SFML_INCLUDE}
)



set(FACTORY_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/Factory)
set(HERO_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/Hero)
set(UNIT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/Unit)
set(ATTACK_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/Attack)

target_link_libraries(
	army
	sfml-graphics
	sfml-window
	sfml-system
	)

target_sources(
        army
	PUBLIC
        ${FACTORY_SOURCES_DIR}/HumanFactory.cpp
        ${FACTORY_SOURCES_DIR}/OrcFactory.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Point.cpp
        ${HERO_SOURCES_DIR}/Hero.cpp
        ${HERO_SOURCES_DIR}/HeroBuilder.cpp
        ${HERO_SOURCES_DIR}/HeroDirector.cpp
        ${HERO_SOURCES_DIR}/HumanHeroBuilder.cpp
        ${HERO_SOURCES_DIR}/OrcHeroBuilder.cpp
	${UNIT_SOURCE_DIR}/BaseUnit.cpp
	${UNIT_SOURCE_DIR}/UnitDecorator.cpp
	${UNIT_SOURCE_DIR}/DoubleAttackUnit.cpp
	${UNIT_SOURCE_DIR}/FireAttackUnit.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Visitor/file_writing_visitor.cpp
	${ATTACK_SOURCE_DIR}/Attack.cpp
	${ATTACK_SOURCE_DIR}/UsualAttack.cpp
	${ATTACK_SOURCE_DIR}/DoubleAttack.cpp
	${ATTACK_SOURCE_DIR}/PercentAttack.cpp
)

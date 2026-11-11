cmake_minimum_required(VERSION 3.16...3.27)

project(Hadrons)

find_package(Geant4 REQUIRED)

include(${Geant4_USE_FILE})

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)

add_executable(sim sim.cc ${sources})
target_link_libraries(sim ${Geant4_LIBRARIES})

add_custom_target(Hadrons DEPENDS sim)

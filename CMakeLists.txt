cmake_minimum_required (VERSION 2.8)
project (lbest-psocxx)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BUILD_TARGET SHARED)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(Boost)

include_directories (${lbest-psocxx_SOURCE_DIR}/
                        ${lbest-psocxx_SOURCE_DIR}/src/)

set(source_files
    src/helpers/Random.cpp
    src/Particle.cpp
    src/Vector.cpp
    src/Topology.cpp
    src/Swarm.cpp
)

add_library(lbest-psocxx SHARED ${source_files})
set_target_properties(lbest-psocxx PROPERTIES VERSION 0.9.999 SOVERSION 1)
target_link_libraries(lbest-psocxx ${LIBS})

# Test our testbed :P
add_subdirectory(testbed/)

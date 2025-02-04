cmake_minimum_required(VERSION 3.15)

project(RType LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_CLIENT "Build the client executable" ON)
option(BUILD_SERVER "Build the server executable" ON)

add_subdirectory(external/SDL3)
add_subdirectory(external/SDL3_ttf)
add_subdirectory(external/SDL3_image)
add_subdirectory(external/SDL3_mixer)
add_subdirectory(external/json)

file(GLOB SOURCES_GAME "src/*.cpp")

add_executable(proceduralX ${SOURCES_GAME})
target_include_directories(proceduralX PRIVATE include/graphical)

target_link_libraries(proceduralX PRIVATE SDL3::SDL3)
target_link_libraries(proceduralX PRIVATE SDL3_ttf::SDL3_ttf)
target_link_libraries(proceduralX PRIVATE SDL3_image::SDL3_image)
target_link_libraries(proceduralX PRIVATE SDL3_mixer::SDL3_mixer)

target_compile_definitions(proceduralX PRIVATE $<$<CONFIG:Debug>:DEBUG>)


if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Building in Debug mode")
else()
    message(STATUS "Building in Release mode")
endif()

add_compile_options(-Wall -Wextra -pedantic)
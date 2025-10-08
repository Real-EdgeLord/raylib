cmake_minimum_required(VERSION 3.10)
project(raylib_project C)

set(CMAKE_C_STANDARD 99)

# Tell CMake where raylib headers and libs are
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

# Collect source files
file(GLOB SOURCES "src/*.c")

# Build the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link raylib + required system libs
target_link_libraries(${PROJECT_NAME} raylib m dl pthread)


cmake_minimum_required(VERSION 3.16)
project(LoggingLibrary LANGUAGES CXX)

set(SOURCES src/main.cpp src/Logger.cpp)
set(INCLUDES src/includes)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 20)

add_executable(main ${SOURCES})
target_include_directories(main PRIVATE ${INCLUDES})

cmake_minimum_required(VERSION 3.22.1)

project(Programming VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Bin)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/Programming/Main.cpp)

add_subdirectory(Common)

target_include_directories(${PROJECT_NAME} PUBLIC Common)

target_link_libraries(${PROJECT_NAME} Common)
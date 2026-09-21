cmake_minimum_required(VERSION 3.13)

project(HackerApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(HackerApp
    src/main.cpp
)

target_link_libraries(HackerApp PRIVATE
    Qt6::Widgets
)
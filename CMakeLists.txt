cmake_minimum_required(VERSION 3.13)

project(hacker-app VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(hacker-app
    src/main.cpp
)

target_link_libraries(hacker-app PRIVATE
    Qt6::Widgets
)

# MARK: Installation
install(TARGETS hacker-app
    RUNTIME DESTINATION bin
)

install(
    FILES resources/hacker-app.desktop
    DESTINATION share/applications
)

set(CPACK_PACKAGE_NAME "hacker-app")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "The best-in-class hacking app for all your hacking needs")
set(CPACK_PACKAGE_CONTACT "Creekside Programming <contact@chsprogramming.org>")

set(CPACK_GENERATOR "DEB")

include(CPack)
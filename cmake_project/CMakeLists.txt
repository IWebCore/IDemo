cmake_minimum_required(VERSION 3.16)

project(cmake_project LANGUAGES CXX)

add_executable(cmake_project main.cpp)

include(GNUInstallDirs)
install(TARGETS cmake_project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

include($ENV{ICMakeCore})
ICMakeCoreInit(cmake_project)
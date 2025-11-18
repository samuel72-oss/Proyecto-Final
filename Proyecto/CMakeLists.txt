cmake_minimum_required(VERSION 3.10)

project(ProyectoInventario)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(include)


set(SOURCES
    src/main.cpp
    src/DatabaseManager.cpp
    src/ReportGenerator.cpp
)

add_executable(ProyectoInventario ${SOURCES})

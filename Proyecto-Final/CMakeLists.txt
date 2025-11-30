cmake_minimum_required(VERSION 3.10)
project(ProyectoFinal)

# Usa C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir headers
include_directories(include)

# Archivos fuente
set(SOURCES
    src/Component.cpp
    src/DatabaseManager.cpp
    src/InventoryManager.cpp
    src/ReportGenerator.cpp
    src/Main.cpp
)

# Crear el ejecutable
add_executable(ProyectoFinal ${SOURCES})
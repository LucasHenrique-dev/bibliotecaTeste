cmake_minimum_required(VERSION 3.27)
project(bibliotecaAplicada)

set(CMAKE_CXX_STANDARD 17)

set(LIBRARIES_DIR ${PROJECT_SOURCE_DIR}/cmake-build-debug)
LINK_DIRECTORIES(${LIBRARIES_DIR})

add_executable(bibliotecaAplicada main.cpp
        minhasLibs/minhaBiblioteca.h)

TARGET_LINK_LIBRARIES(bibliotecaAplicada bibliotecaTeste)

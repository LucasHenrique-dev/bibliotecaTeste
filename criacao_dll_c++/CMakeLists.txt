cmake_minimum_required(VERSION 3.27)
project(bibliotecaTeste)

set(CMAKE_CXX_STANDARD 17)

add_library(bibliotecaTeste SHARED minhaBiblioteca.h minhaBiblioteca.cpp
        bibliotecaAuxiliar.cpp
        bibliotecaAuxiliar.h)

find_package(Python COMPONENTS Development)

if (Python_FOUND)
    target_include_directories(bibliotecaTeste PRIVATE ${Python_INCLUDE_DIRS})
    target_link_libraries(bibliotecaTeste PRIVATE ${Python_LIBRARIES})
else()
    message(FATAL_ERROR "Python development headers/libs not found.")
endif()

cmake_minimum_required(VERSION 3.15)
project(TrabalhoGrafosGP23)

set(CMAKE_CXX_STANDARD 11)

add_executable(TrabalhoGrafosGP23 src/Aresta.cpp main.cpp)

target_include_directories(TrabalhoGrafosGP23 PRIVATE include)

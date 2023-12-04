cmake_minimum_required(VERSION 3.15)
project(TrabalhoGrafosGP23Testes)

set(CMAKE_CXX_STANDARD 11)

set(TEST_SOURCE_FILES ArestaTests.cpp)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(TrabalhoGrafosGP23Testes ${TEST_SOURCE_FILES})

target_link_libraries(TrabalhoGrafosGP23Testes TrabalhoGrafosGP23)

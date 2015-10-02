cmake_minimum_required(VERSION 2.6)
project(TP1GeneticProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Population.cpp Population.h Operators.cpp Operators.h TypesDefinition.h Terminals.cpp Terminals.h BinaryTree.h)
add_executable(TP1GeneticProgramming ${SOURCE_FILES})
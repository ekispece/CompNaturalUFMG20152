cmake_minimum_required(VERSION 2.6)
project(TP1GeneticProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(MU_INCLUDE_FILES
        muparser/src/muParser.cpp
        muparser/src/muParserBase.cpp
        muparser/src/muParserBytecode.cpp
        muparser/src/muParserCallback.cpp
        muparser/src/muParserError.cpp
        muparser/src/muParserTokenReader.cpp
        muparser/include/muParser.h
        muparser/include/muParserBase.h
        muparser/include/muParserBytecode.h
        muparser/include/muParserCallback.h
        muparser/include/muParserDef.h
        muparser/include/muParserError.h
        muparser/include/muParserFixes.h
        muparser/include/muParserStack.h
        muparser/include/muParserToken.h
        muparser/include/muParserTokenReader.h
)

set(SOURCE_FILES main.cpp Population.cpp Population.h Operators.cpp Operators.h TypesDefinition.h Terminals.cpp Terminals.h BinaryTree.h ExpressionParse.h ${MU_INCLUDE_FILES} ExecutionParameters.h FileParser.cpp FileParser.h)
add_executable(TP1GeneticProgramming ${SOURCE_FILES})
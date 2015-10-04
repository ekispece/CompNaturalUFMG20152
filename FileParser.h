//
// Created by sergio on 10/3/15.
//

#ifndef TP1GENETICPROGRAMMING_FILEPARSER_H
#define TP1GENETICPROGRAMMING_FILEPARSER_H

#include <fstream>
#include <iostream>
#include <string>

class FileParser
{
public:
    int getNumberOfVariables();

    FileParser(std::string filePath) :
            filePath(filePath)
    { }
    ~FileParser() { }

    std::vector<std::string> getVectorOfTextFile();

private:
    std::string filePath;
    int numberOfVariables = 0;
};


#endif //TP1GENETICPROGRAMMING_FILEPARSER_H

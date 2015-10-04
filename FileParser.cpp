//
// Created by sergio on 10/3/15.
//

#include <vector>
#include "FileParser.h"
#include "ExecutionParameters.h"

int FileParser::getNumberOfVariables()
{
    std::ifstream file(this->filePath, std::ifstream::in);
    if (!file)
    { std::cerr << "ERROR: Couldn't open the file " << this->filePath << std::endl; exit(1); }

    int numberOfVariables = 0;
    if (file.good())
    {
        std::string line;
        getline(file, line);

        line = line.substr(2); //Some of the files start with blankspaces, this in thesis has no effect in the files, since, it should start with at least 1 number (or 1 blankspace)
        for (char c : line)
        {
            if (c==' ')
                numberOfVariables++;
        }
    }
    this->numberOfVariables = numberOfVariables;
    file.close();
    ExecutionParameters::getInstance().setNumberOfVariables(numberOfVariables);
    return numberOfVariables;
}

std::vector<std::string> FileParser::getVectorOfTextFile()
{

    std::vector<std::string> fileContent;

    std::ifstream file(this->filePath, std::ifstream::in);
    if (!file)
    { std::cerr << "ERROR: Couldn't open the file " << this->filePath << std::endl; exit(1); }

    while (file.good())
    {
        std::string line;
        getline(file, line);
        fileContent.push_back(line);
    }

    file.close();

    return fileContent;
}
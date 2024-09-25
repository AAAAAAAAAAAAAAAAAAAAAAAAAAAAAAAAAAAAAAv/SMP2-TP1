#include "Lexique.h"
#include "utilitaire.hpp"
#include <cstring>
#include <iomanip>
#include <iostream>
Lexique::Lexique(const std::string& fileName)
{
    readFileIntoString(fileName, this->inputString);
    char* cleanedString = strtok((char*)inputString.c_str(), " ,.;-");
    while (cleanedString != NULL)
    {
        std::string currentWord = cleanedString;
        this->occurences[currentWord]++;
        cleanedString = strtok(NULL, " ,.;-\"\r\n\t");
    };
}

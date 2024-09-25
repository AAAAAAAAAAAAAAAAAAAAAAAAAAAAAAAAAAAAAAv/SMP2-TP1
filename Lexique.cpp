#include "Lexique.hpp"
#include "utilitaire.hpp"
#include <fstream>
#include <vector>
#include <stdint.h>
#include <cstring>
#include <iostream>

Lexique::Lexique(const std::string& fileName)
{
    readFileIntoString(fileName, this->inputString);
    char* cleanedString = strtok((char*)inputString.c_str(), " _,.?()!;:-\"\r\n\t/$£0123456789'’@");
    while (cleanedString != NULL)
    {
        std::string currentWord = cleanedString;
        this->occurences[currentWord]++;
        cleanedString = strtok(NULL, " _,.?()!;:-\"\r\n\t/$£0123456789'’@");
    };
}

unsigned int Lexique::GetWordOccurences(const std::string& word) const
{
    auto it = this->occurences.find(word);
    if (it != this->occurences.end()) {
        return it->second;  // Retourne l'occurrence si le mot est trouv�
    }
    else {
        return 0;  // Retourne 0 si le mot n'est pas trouv�
    }
}

unsigned int Lexique::GetWordCount() const
{
    return (unsigned int)(this->occurences.size());
}

void Lexique::DeleteWord(const std::string& word)
{
    auto it = this->occurences.find(word);
    if (it != this->occurences.end()) {
        this->occurences.erase(it); 
    }
}

bool Lexique::SaveToFile(const std::string& fileName) const
{
    std::ofstream fichier(fileName);
    if (!fichier.is_open()) {
        return false;
    }

    for (const auto& paire : this->occurences) {
        fichier << paire.first << " : " << paire.second << std::endl;
    }

    fichier.close();
    
    return true;
}

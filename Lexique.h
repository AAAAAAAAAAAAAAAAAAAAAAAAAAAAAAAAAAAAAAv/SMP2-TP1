#ifndef LEXIQUE_H
#define LEXIQUE_H

#include <string>
#include <stdint.h>
#include <vector>
#include <map>

class Lexique {
public:
    Lexique() = default;
    explicit Lexique(const std::string& fileName);
    explicit Lexique(Lexique const& l);
    virtual ~Lexique() = default;


    
protected:
    std::string _nom;
    //uint32_t _occurence;
    std::vector<std::string> _lexique;
private:
	std::map<std::string, unsigned int> occurences;
	std::string inputString = "";
};

#endif //LEXIQUE_H
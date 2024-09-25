#ifndef LEXIQUE_H
#define LEXIQUE_H

#include <string>
#include <stdint.h>
#include <vector>

class Lexique {
public:
    Lexique() = default;
    explicit Lexique(std::string nom);
    explicit Lexique(Lexique const& l);
    virtual ~Lexique() = default;
    
protected:
    std::string _nom;
    uint32_t _occurence;
    std::vector<std::string> _lexique;
};

#endif //LEXIQUE_H
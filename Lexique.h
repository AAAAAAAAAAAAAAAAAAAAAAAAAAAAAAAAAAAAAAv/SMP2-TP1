#ifndef LEXIQUE_H
#define LEXIQUE_H

#include <string>
#include <stdint>
#include <vector>

class Lexique {
public:
    explicit Lexique() = default;
    Lexique(Lexique const& l);
    virtual ~Lexique();
    
protected:
    std::string _nom;
    uint32_t _occurence;
    std::vector<string> _lexique;
};

#endif //LExIQUE_H
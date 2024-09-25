#include "Lexique.h"

Lexique::Lexique(std::string nom) : _nom(nom) {

}

Lexique::Lexique(Lexique const& l) : _nom(l._nom) {

}
    
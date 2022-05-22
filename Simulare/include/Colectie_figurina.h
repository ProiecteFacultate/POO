#ifndef COLECTIE_FIGURINA_H
#define COLECTIE_FIGURINA_H
#include "Colectie.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Colectie_figurina: public Colectie
{
private:
    string categorie;
    string brand;
    string material;

public:
    Colectie_figurina(){};

    operator>>(istream&);
    ostream& operator<<(ostream&);

};

#endif // COLECTIE_FIGURINA_H

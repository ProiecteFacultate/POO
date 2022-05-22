#ifndef COLECTIE_H
#define COLECTIE_H
#include "Produs.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Colectie: public Produs
{
private:
    string denumire;

public:
    Colectie(){};

    operator>>(istream&);
    virtual ostream& operator<<(ostream&);
};

#endif // COLECTIE_H

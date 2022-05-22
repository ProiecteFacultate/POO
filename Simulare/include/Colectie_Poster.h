#ifndef COLECTIE_POSTER_H
#define COLECTIE_POSTER_H
#include "Colectie.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Colectie_Poster: public Colectie
{
private:
    string format;

public:
    Colectie_Poster(){};

    operator>>(istream&);
    ostream& operator<<(ostream&);
};

#endif // COLECTIE_POSTER_H

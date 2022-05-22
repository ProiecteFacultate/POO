#ifndef DVD_FILM_H
#define DVD_FILM_H
#include "Dvd.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dvd_film: public Dvd
{
private:
    string nume;
    string gen;

public:
    Dvd_film() {};

    operator>>(istream&);
    ostream& operator<<(ostream&);
};

#endif // DVD_FILM_H

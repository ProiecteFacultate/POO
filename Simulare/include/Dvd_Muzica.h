#ifndef DVD_MUZICA_H
#define DVD_MUZICA_H
#include "Dvd.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dvd_Muzica: public Dvd
{
private:
    string numeAlbum;
    int nrInterpreti;
    vector<string> vInterpreti;

public:
    Dvd_Muzica(){};

    operator>>(istream&);
    ostream& operator<<(ostream&);
};

#endif // DVD_MUZICA_H

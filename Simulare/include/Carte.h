#ifndef CARTE_H
#define CARTE_H
#include "Produs.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

using namespace std;

class Carte: public Produs
{
private:
    string titlu;
    int nrAutori;
    vector<string> vAutori;
    string editura;

public:
    Carte(){};

    operator>>(istream&);
    virtual ostream& operator<<(ostream&);

    string getTitlu(){return this->titlu;}

};

#endif // CARTE_H

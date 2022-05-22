#ifndef OSPATAR_H
#define OSPATAR_H
#include "Comanda.h"

#include <iostream>
#include <vector>
using namespace std;

class Ospatar
{
private:
    string Nume;
    Comanda *comenzi;
    int nrComenzi;
    char gen;
    int varsta;

public:
    Ospatar(){};
    Ospatar(string, Comanda*, int, char, int);

    friend ostream& operator<<(ostream&, Ospatar&);
    void afisare(ostream&);

    friend bool operator>(Ospatar&, Ospatar&);
    friend bool operator==(Ospatar&, Ospatar&);
    string nume(){return this->Nume;}
};

#endif // OSPATAR_H

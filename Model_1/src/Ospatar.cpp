#include "Ospatar.h"
#include "Comanda.h"

#include <iostream>
#include <vector>
using namespace std;

Ospatar::Ospatar(string nume, Comanda *comenzi, int nrComenzi, char gen, int varsta)
{
    this->Nume = nume;
    this->nrComenzi = nrComenzi;
    this->gen = gen;
    this->varsta = varsta;

    this->comenzi = new Comanda[nrComenzi + 1];
    for(int i = 0; i < nrComenzi; i++)
        this->comenzi[i] = comenzi[i];
}


ostream& operator<<(ostream& out, Ospatar& obj)
{
    obj.afisare(out);

    return out;
}

void Ospatar::afisare(ostream& out)
{
    out<<"Nume: "<<this->Nume<<endl;

    out<<"Gen: "<<this->gen<<endl;

    out<<"Varsta: "<<this->varsta<<endl;

    out<<"Nr comenzi: "<<this->nrComenzi<<endl;

  //  for(int i = 0; i < this->nrComenzi; i++)
     //   out<<"Comanda "<<i + 1<<": "<<this->comenzi[i]<<endl;

    out<<endl;
}

bool operator>(Ospatar& o1, Ospatar& o2)
{
    return o1.nrComenzi > o2.nrComenzi;
}

bool operator==(Ospatar& o1, Ospatar& o2)
{
    return o1.nrComenzi == o2.nrComenzi;
}


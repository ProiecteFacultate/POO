#include "Candidat_ID_1.h"

#include "Candidat.h"
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


istream& operator>>(istream& in, Candidat_ID_1& obj)
{
    obj.citire(in);

    return in;
}

void Candidat_ID_1::citire(istream& in)
{
    this->Candidat::citire(in);

    cout<<"Nota mate bac: ";
    in>>this->notaMateBac;

    cout<<endl;

    Candidat_ID_1::numarInregistrare++;
    this->calcul();
}

ostream& operator<<(ostream& out, Candidat_ID_1& obj)
{
    obj.afisare(out);

    return out;
}

void Candidat_ID_1::afisare(ostream& out)
{
    this->Candidat::afisare(out);

    out<<"Nota mate bac: "<<this->notaMateBac<<endl;
}

void Candidat_ID_1::calcul()
{
    this->setCod(to_string(Candidat_ID_1::numarInregistrare));
    this->setMedieAdmitere(0.6 * this->getNotaProba() + 0.4 * this->notaMateBac);
}


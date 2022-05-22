#include "Candidat_IF_1.h"

#include "Candidat.h"
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


istream& operator>>(istream& in, Candidat_IF_1& obj)
{
    obj.citire(in);

    Candidat_IF_1::numarInregistrare++;

    obj.calcul();

    return in;
}

void Candidat_IF_1::citire(istream& in)
{
    this->Candidat::citire(in);
}

ostream& operator<<(ostream& out, Candidat_IF_1& obj)
{
    obj.afisare(out);

    return out;
}

void Candidat_IF_1::afisare(ostream& out)
{
    this->Candidat::afisare(out);
}

void Candidat_IF_1::calcul()
{
    this->setCod(to_string(Candidat_IF_1::numarInregistrare));
    this->setMedieAdmitere(0.8 * this->getNotaProba() + 0.2 * this->getMedieBac());
}


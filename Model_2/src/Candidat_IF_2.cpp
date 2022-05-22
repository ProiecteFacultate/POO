#include "Candidat_IF_2.h"

#include "Candidat.h"
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


istream& operator>>(istream& in, Candidat_IF_2& obj)
{
    obj.citire(in);

    Candidat_IF_2::numarInregistrare++;
    obj.calcul();

    return in;
}

void Candidat_IF_2::citire(istream& in)
{
    this->Candidat::citire(in);

    cout<<"Nota absolvire prima: ";
    in>>this->notaAbsolvirePrima;

    cout<<endl;
}

ostream& operator<<(ostream& out, Candidat_IF_2& obj)
{
    obj.afisare(out);


    return out;
}

void Candidat_IF_2::afisare(ostream& out)
{
    this->Candidat::afisare(out);

    out<<"Nota absolvire prima: "<<this->notaAbsolvirePrima<<endl;

}

void Candidat_IF_2::calcul()
{
    this->setCod("IF2_" + to_string(Candidat_IF_2::numarInregistrare));
    this->setMedieAdmitere(0.6 * this->getNotaProba() + 0.4 * this->notaAbsolvirePrima);
}


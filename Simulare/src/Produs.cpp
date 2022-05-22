#include "Produs.h"

Produs::operator>>(istream& in)
{
    cout<<"Citire produs: "<<endl;

    cout<<"Pret: ";
    in>>this->pret;
    cout<<"Cantitate: ";
    in>>this->cantitate;

    cout<<endl;
}

ostream& Produs::operator<<(ostream& out)
{
    cout<<"Afisare produs: "<<endl;

    cout<<"Pret: "<<this->pret<<endl;
    cout<<"Cantitate: "<<this->cantitate<<endl;

    out<<endl;

    return out;
}

void Produs::setId(int x)
{
    Produs::id = x;
}

void Produs::increaseId()
{
    Produs::id++;
}

int Produs::getId()
{
    return Produs::id;
}

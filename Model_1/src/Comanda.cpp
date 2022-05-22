#include "Comanda.h"
#include "Produs.h"

#include <iostream>
#include <vector>
using namespace std;

Comanda::Comanda(string denProdus, int nrPortii, int zi, int luna, int an):prod(denProdus)
{
    this->data.zi = zi;
    this->data.luna = luna;
    this->data.an = an;

    Comanda::cresteNum();
    this->nrPortii = nrPortii;
}

Comanda::Comanda(string denProdus, int nrPortii):prod(denProdus)
{
    this->data.zi = 0;
    this->data.luna = 0;
    this->data.an = 0;
    Comanda::cresteNum();
    this->nrPortii = nrPortii;
}

Comanda::Comanda(const Comanda& obj):prod(obj.prod)
{
    this->data.zi = obj.data.zi;
    this->data.luna = obj.data.luna;
    this->data.an = obj.data.an;
    this->num = obj.num;
    this->nrPortii = obj.nrPortii;
}

Comanda& Comanda::operator=(Comanda& obj)
{
    if(this != &obj)
    {
        this->data.zi = obj.data.zi;
        this->data.luna = obj.data.luna;
        this->data.an = obj.data.an;
        this->prod = obj.prod;
        Comanda::cresteNum();
        this->nrPortii = obj.nrPortii;
    }

    return *this;
}

Comanda::~Comanda()
{
    this->data.zi = 0;
    this->data.luna = 0;
    this->data.an = 0;
    this->nrPortii = 0;
}




istream& operator>>(istream& in, Comanda& obj)
{
    in>>obj.prod;
    obj.citire(in);

    return in;
}

void Comanda::citire(istream& in)
{
    Comanda::cresteNum();

    cout<<"Nr portii: ";
    in>>this->nrPortii;

    cout<<"Zi: ";
    in>>this->data.zi;

    cout<<"Luna: ";
    in>>this->data.luna;

    cout<<"An: ";
    in>>this->data.an;

    cout<<endl;
}

ostream& operator<<(ostream& out, Comanda& obj)
{
    out<<obj.prod;
    obj.afisare(out);

    return out;
}

void Comanda::afisare(ostream& out)
{
    out<<"Nr portii: "<<this->nrPortii<<endl;

    out<<"Zi: "<<this->data.zi<<endl;

    out<<"Luna: "<<this->data.luna<<endl;

    out<<"An: "<<this->data.an<<endl;

    out<<endl;
}


void Comanda::del()
{
    this->~Comanda();
    cout<<"Comanda anulata"<<endl;
}

Comanda& operator+(Comanda& obj, int val)
{
    obj.nrPortii += val;

    return obj;
}

void Comanda::operator++(int x)
{
    this->nrPortii ++;

}

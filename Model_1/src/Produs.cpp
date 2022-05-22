#include "Produs.h"

#include <iostream>
#include <vector>
using namespace std;

Produs::Produs(string denProdus, float pretProdus)
{
    this->denProdus = denProdus;
    this->pretProdus = pretProdus;
}

Produs::Produs(string denProdus)
{
    this->denProdus = denProdus;
    this->pretProdus = 0;
}

Produs::Produs(const Produs& obj)
{
    this->denProdus = obj.denProdus;
    this->pretProdus = obj.pretProdus;
}

Produs& Produs::operator=(Produs& obj)
{
    if(this != &obj)
    {
        this->denProdus = obj.denProdus;
        this->pretProdus = obj.pretProdus;
    }

    return *this;
}

Produs::~Produs()
{
    this->denProdus = "";
    this->pretProdus = 0;
}

istream& operator>>(istream& in, Produs& obj)
{
    obj.citire(in);

    return in;
}

void Produs::citire(istream& in)
{
    cout<<"Denumire: ";
    in>>this->denProdus;

    cout<<"Pret: ";
    in>>this->pretProdus;

    cout<<endl;
}

ostream& operator<<(ostream& out, Produs& obj)
{
    obj.afisare(out);

    return out;
}

void Produs::afisare(ostream& out)
{
    out<<"Denumire: "<<this->denProdus<<endl;

    out<<"Pret: "<<this->pretProdus<<endl;

    out<<endl;
}

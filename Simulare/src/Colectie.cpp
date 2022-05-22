#include "Colectie.h"
#include "Produs.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Colectie::operator>>(istream& in)
{
    Produs::operator>>(in);

    cout<<"Citire colectie: "<<endl;

    cout<<"Denumire: ";
    in>>this->denumire;

    cout<<endl;
}

ostream& Colectie::operator<<(ostream& out)
{
    Produs::operator<<(out);

    cout<<"Afisare colectie: "<<endl;

    out<<"Denumire: "<<this->denumire<<endl;

    out<<endl;

    return out;
}

#include "Colectie_figurina.h"
#include "Colectie.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Colectie_figurina::operator>>(istream& in)
{
    Colectie::operator>>(in);

    cout<<"Citire colectie figurina: "<<endl;

    cout<<"Categorie: ";
    in>>this->categorie;

    cout<<"Brand: ";
    in>>this->brand;

    cout<<"Material: ";
    in>>this->material;

    cout<<endl;
}

ostream& Colectie_figurina::operator<<(ostream& out)
{
    Colectie::operator<<(out);

    cout<<"Afisare colectie figurina: "<<endl;

    out<<"Categorie: "<<this->categorie<<endl;
    out<<"Brand: "<<this->brand<<endl;
    out<<"Material: "<<this->material<<endl;

    out<<endl;

    return out;
}

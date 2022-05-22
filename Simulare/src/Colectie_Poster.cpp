#include "Colectie_Poster.h"
#include "Colectie.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Colectie_Poster::operator>>(istream& in)
{
    Colectie::operator>>(in);

    cout<<"Citire colectie poster: "<<endl;

    cout<<"Format: ";
    in>>this->format;

    cout<<endl;
}

ostream& Colectie_Poster::operator<<(ostream& out)
{
    Colectie::operator<<(out);

    cout<<"Afisare colectie poster: "<<endl;

    out<<"Format: "<<this->format<<endl;

    out<<endl;

    return out;
}

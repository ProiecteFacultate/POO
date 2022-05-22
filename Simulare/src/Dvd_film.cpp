#include "Dvd_film.h"
#include "Dvd.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Dvd_film::operator>>(istream& in)
{
    Dvd::operator>>(in);

    cout<<"Citire dvd film: "<<endl;

    cout<<"Nume: ";
    in>>this->nume;

    cout<<"Gen: ";
    in>>this->gen;

    cout<<endl;
}

ostream& Dvd_film::operator<<(ostream& out)
{
    Dvd::operator<<(out);

    cout<<"Afisare dvd film: "<<endl;

    out<<"Nume: "<<this->nume<<endl;
    out<<"Gen: "<<this->gen<<endl;


    out<<endl;

    return out;
}


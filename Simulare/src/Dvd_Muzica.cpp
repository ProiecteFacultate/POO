#include "Dvd_Muzica.h"
#include "Dvd.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Dvd_Muzica::operator>>(istream& in)
{
    Dvd::operator>>(in);

    cout<<"Citire dvd muzica: "<<endl;

    cout<<"Nume album: ";
    in>>this->numeAlbum;

    cout<<"Nr interpreti: ";
    in>>this->nrInterpreti;

    vInterpreti.resize(this->nrInterpreti);
    for(int i = 0; i < this->nrInterpreti; i++)
    {
        cout<<"Interpretul "<<i + 1<<": ";
        in>>vInterpreti[i];
    }

    cout<<endl;
}

ostream& Dvd_Muzica::operator<<(ostream& out)
{
    Dvd::operator<<(out);

    cout<<"Afisare dvd muzica: "<<endl;

    out<<"Nume album: "<<this->numeAlbum<<endl;

    for(int i = 0; i < this->nrInterpreti; i++)
        out<<"Interpretul "<<i + 1<<": "<<this->vInterpreti[i]<<endl;


    out<<endl;

    return out;
}

#include "Carte.h"
#include "Produs.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Carte::operator>>(istream& in)
{
    Produs::operator>>(in);

    cout<<"Citire carte: "<<endl;

    cout<<"Titlu: ";
    in>>this->titlu;
    cout<<"Editura: ";
    in>>this->editura;
    cout<<"Nr autori: ";
    in>>this->nrAutori;

    vAutori.resize(this->nrAutori);
    for(int i = 0; i < this->nrAutori; i++)
    {
        cout<<"Autorul "<<i + 1<<": ";
        in>>vAutori[i];
    }

    cout<<endl;
}

ostream& Carte::operator<<(ostream& out)
{
    Produs::operator<<(out);

    cout<<"Afisare carte: "<<endl;

    out<<"Titlu: "<<this->titlu<<endl;
    out<<"Editura: "<<this->editura<<endl<<endl;

    for(int i = 0; i < this->nrAutori; i++)
        out<<"Autorul "<<i + 1<<": "<<this->vAutori[i]<<endl;

    out<<endl;

    return out;
}

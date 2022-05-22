#include "Dvd.h"
#include "Produs.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Dvd::operator>>(istream& in)
{
    Produs::operator>>(in);

    cout<<"Citire dvd: "<<endl;

    cout<<"Minute: ";
    in>>this->minute;

    cout<<endl;
}

ostream& Dvd::operator<<(ostream& out)
{
    Produs::operator<<(out);

    cout<<"Afisare dvd: "<<endl;

    out<<"Minute: "<<this->minute<<endl;

    out<<endl;

    return out;
}

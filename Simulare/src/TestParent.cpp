#include "TestParent.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream& operator>>(istream& in, TestParent& obj)
{
    obj.citire(in);

    cout<<endl;

    return in;
}

ostream& operator<<(ostream& out, TestParent& obj)
{
    obj.afisare(out);

    return out;
}

void TestParent::citire(istream& in)
{
    cout<<"Var1: ";
    in>>this->var1;

    cout<<"Var2: ";
    in>>this->var2;

    cout<<endl;
}

void TestParent::afisare(ostream& out)
{
    out<<"Var1: "<<this->var1<<endl;
    out<<"Var2: "<<this->var2<<endl;
}

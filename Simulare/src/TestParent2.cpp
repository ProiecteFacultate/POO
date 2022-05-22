#include "TestParent2.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream& TestParent2::operator>>(istream& in)
{
    cout<<"Var1: ";
    in>>this->var1;

    cout<<"Var2: ";
    in>>this->var2;

    cout<<endl;

    return in;
}

ostream& TestParent2::operator<<(ostream& out)
{
    out<<"Var1: "<<this->var1<<endl;
    out<<"Var2: "<<this->var2<<endl;

    out<<endl;

    return out;
}

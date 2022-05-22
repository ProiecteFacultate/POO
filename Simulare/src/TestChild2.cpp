#include "TestChild2.h"
#include "TestParent2.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream& TestChild2::operator>>(istream& in)
{
    this->TestParent2::operator>>(in);

    cout<<"Var1__: ";
    in>>this->var1;

    cout<<"Var2__: ";
    in>>this->var2;

    cout<<endl;

    return in;
}

ostream& TestChild2::operator<<(ostream& out)
{
    this->TestParent2::operator<<(out);

    out<<"Var1__: "<<this->var1<<endl;
    out<<"Var2__: "<<this->var2<<endl;

    out<<endl;

    return out;
}

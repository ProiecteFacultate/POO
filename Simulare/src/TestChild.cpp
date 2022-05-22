#include "TestChild.h"
#include "TestParent.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


istream& operator>>(istream& in, TestChild& obj)
{
    obj.citire(in);

    cout<<endl;

    return in;
}

ostream& operator<<(ostream& out, TestChild& obj)
{
    obj.afisare(out);

    return out;
}

void TestChild::citire(istream& in)
{
    this->TestParent::citire(in);

    cout<<"Var12_child: ";
    in>>this->var1_child;

    cout<<"Var2_child: ";
    in>>this->var2_child;

    cout<<endl;
}

void TestChild::afisare(ostream& out)
{
    this->TestParent::afisare(out);
    out<<"Var1_child: "<<this->var1_child<<endl;
    out<<"Var2_child: "<<this->var2_child<<endl;
}

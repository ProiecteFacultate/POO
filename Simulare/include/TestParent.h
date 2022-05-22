#ifndef TESTPARENT_H
#define TESTPARENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TestParent
{
private:
    int var1;
    string var2;

public:
    TestParent(){};

    friend istream& operator>>(istream&, TestParent&);
    friend ostream& operator<<(ostream&, TestParent&);

    virtual void citire(istream&);
    virtual void afisare(ostream&);

};

#endif // TESTPARENT_H

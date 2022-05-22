#ifndef TESTCHILD_H
#define TESTCHILD_H
#include "TestParent.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TestChild: public TestParent
{
private:
    int var1_child;
    string var2_child;

public:
    TestChild(){};

    friend istream& operator>>(istream&, TestChild&);
    friend ostream& operator<<(ostream&, TestChild&);

    void citire(istream&);
    void afisare(ostream&);
};

#endif // TESTCHILD_H

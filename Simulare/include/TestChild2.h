#ifndef TESTCHILD2_H
#define TESTCHILD2_H
#include "TestParent2.h"


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TestChild2: public TestParent2
{
private:
    int var1;
    int var2;

public:
    TestChild2(){};

    istream& operator>>(istream&);
    ostream& operator<<(ostream&);

};

#endif // TESTCHILD2_H

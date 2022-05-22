#ifndef TESTPARENT2_H
#define TESTPARENT2_H


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TestParent2
{
private:
    int var1;
    int var2;

public:
    TestParent2(){};

    virtual istream& operator>>(istream&);
    virtual ostream& operator<<(ostream&);

};

#endif // TESTPARENT2_H

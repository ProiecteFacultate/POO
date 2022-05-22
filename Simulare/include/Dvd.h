#ifndef DVD_H
#define DVD_H
#include "Produs.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dvd: public Produs
{
private:
    int minute;

public:
    Dvd(){};

    operator>>(istream&);
    virtual ostream& operator<<(ostream&);
};

#endif // DVD_H

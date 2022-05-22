#ifndef COMSPEC_H
#define COMSPEC_H
#include "Comanda.h"

#include <iostream>
#include <vector>
using namespace std;

class ComSpec: public Comanda
{
private:
    string ObsC;
    float pretSupl;

public:
    ComSpec(){};
    ComSpec(string, int, int, int, int, string, float);
    ~ComSpec();

};

#endif // COMSPEC_H

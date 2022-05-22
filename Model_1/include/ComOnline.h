#ifndef COMONLINE_H
#define COMONLINE_H
#include "Comanda.h"
#include "ComSpec.h"

#include <iostream>
#include <vector>
using namespace std;

class ComOnline: public Comanda, public ComSpec
{
private:
    string adrLivr;
    int comLivr;

public:
    ComOnline(string, int, int, int, int, string, comLivr);
};

#endif // COMONLINE_H

#include "ComSpec.h"
#include "Comanda.h"

#include <iostream>
#include <vector>
using namespace std;

ComSpec::ComSpec(string denProdus, int nrPortii, int zi, int luna, int an, string ObsC, float pretSupl):Comanda(denProdus, nrPortii, zi, luna, an)
{
    this->ObsC = ObsC;
    this->pretSupl = pretSupl;
}

ComSpec::~ComSpec()
{
    ObsC = "";
    pretSupl = 0;
}

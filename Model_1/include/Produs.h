#ifndef PRODUS_H
#define PRODUS_H

#include <iostream>
#include <vector>
using namespace std;

class Produs
{
private:
    string denProdus;
    float pretProdus;

public:
    Produs(){};
    Produs(string, float);
    Produs(string);
    Produs(const Produs&);
    Produs& operator=(Produs&);
    ~Produs();

    friend istream& operator>>(istream&, Produs&);
    void citire(istream&);

    friend ostream& operator<<(ostream&, Produs&);
    void afisare(ostream&);
};


#endif // PRODUS_H

#ifndef COMANDA_H
#define COMANDA_H
#include "Produs.h"

#include <iostream>
#include <vector>
using namespace std;

class Comanda
{
private:
    static int num;
    Produs prod;
    int nrPortii;
    struct Data{
        int zi, luna, an;
    }data;

public:
    Comanda(){};
    Comanda(string, int, int, int, int);
    Comanda(string, int);
    Comanda(const Comanda&);
    Comanda& operator=(Comanda&);
    ~Comanda();

    friend istream& operator>>(istream&, Comanda&);
    void citire(istream&);

    friend ostream& operator<<(ostream&, Comanda&);
    void afisare(ostream&);

    friend Comanda& operator+(Comanda&, int);
    void operator++(int);
    void del();

    static void setNum(int val){Comanda::num = val;}
    static void cresteNum(){Comanda::num++;}
};

#endif // COMANDA_H

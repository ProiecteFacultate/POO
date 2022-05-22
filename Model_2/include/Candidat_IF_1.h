#ifndef CANDIDAT_IF_1_H
#define CANDIDAT_IF_1_H

#include "Candidat.h"
#include <iostream>
#include <vector>
using namespace std;


class Candidat_IF_1: public Candidat
{
private:
    static int numarInregistrare;



public:
    Candidat_IF_1(){};
    friend istream& operator>>(istream&, Candidat_IF_1&);
    friend ostream& operator<<(ostream&, Candidat_IF_1&);

    void citire(istream&);
    void afisare(ostream&);

    void calcul();
    static void setNumarInregistrare(int val){Candidat_IF_1::numarInregistrare = val;}
};

#endif // CANDIDAT_IF_1_H

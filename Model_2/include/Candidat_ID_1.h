#ifndef CANDIDAT_ID_1_H
#define CANDIDAT_ID_1_H


#include "Candidat.h"
#include <iostream>
#include <vector>
using namespace std;


class Candidat_ID_1: public Candidat
{
private:
    static int numarInregistrare;
    int notaMateBac;



public:
    Candidat_ID_1(){};
    friend istream& operator>>(istream&, Candidat_ID_1&);
    friend ostream& operator<<(ostream&, Candidat_ID_1&);

    void citire(istream&);
    void afisare(ostream&);

    void calcul();
    static void setNumarInregistrare(int val){Candidat_ID_1::numarInregistrare = val;}
};

#endif // CANDIDAT_ID_1_H

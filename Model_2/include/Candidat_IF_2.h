#ifndef CANDIDAT_IF_2_H
#define CANDIDAT_IF_2_H


#include "Candidat.h"
#include <iostream>
#include <vector>
using namespace std;


class Candidat_IF_2: public Candidat
{
private:
    static int numarInregistrare;
    float notaAbsolvirePrima;



public:
    Candidat_IF_2(){};
    friend istream& operator>>(istream&, Candidat_IF_2&);
    friend ostream& operator<<(ostream&, Candidat_IF_2&);

    void citire(istream&);
    void afisare(ostream&);

    void calcul();
    static void setNumarInregistrare(int val){Candidat_IF_2::numarInregistrare = val;}
};
#endif // CANDIDAT_IF_2_H

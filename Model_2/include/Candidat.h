#ifndef CANDIDAT_H
#define CANDIDAT_H

#include <iostream>
#include <vector>
using namespace std;

class Candidat
{
private:
    string nume;
    string serie;
    string numarCI;
    float medieBAC;
    float notaProba;
    float medieAdmitere;
    string cod;

    string categorie;
    string program;

public:
    Candidat(){};
    Candidat(string, string, string, float, float);
    ~Candidat();

    friend istream& operator>>(istream&, Candidat&);
    friend ostream& operator<<(ostream&, Candidat&);

    virtual void citire(istream&);
    virtual void afisare(ostream&);

    void setCod(string cod){this->cod = cod;}
    void setMedieAdmitere(int medieAdmitere){this->medieAdmitere = medieAdmitere;}

    float getMedieBac(){return this->medieBAC;}
    float getNotaProba(){return this->notaProba;}

};

#endif // CANDIDAT_H

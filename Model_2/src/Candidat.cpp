#include "Candidat.h"

#include <iostream>
#include <vector>
using namespace std;

Candidat::Candidat(string nume, string serie, string numarCI, float medieBAC, float notaProba)
{
    this->nume = nume;
    this->serie = serie;
    this->numarCI = numarCI;
    this->medieBAC = medieBAC;
    this->notaProba = notaProba;

    this->medieAdmitere = 0;
    this->cod = "";
}

Candidat::~Candidat()
{
    this->nume = "";
    this->serie = "";
    this->numarCI = "";
    this->medieBAC = 0;
    this->medieAdmitere = 0;
    this->notaProba = 0;
    this->cod = "";
}

istream& operator>>(istream& in, Candidat& obj)
{
    obj.citire(in);

    return in;
}

void Candidat::citire(istream& in)
{
    cout<<"Nume: ";
    in>>this->nume;

    cout<<"Serie: ";
    in>>this->serie;

    cout<<"Numar CI: ";
    in>>this->numarCI;

    cout<<"Medie BAC: ";
    in>>this->medieBAC;

    cout<<"Nota proba: ";
    in>>this->notaProba;

    cout<<"Program: ";
    in>>this->program;

    cout<<"Categoria: ";
    in>>this->categorie;

    this->medieAdmitere = 0;
    this->cod = "";

    cout<<endl;
}



ostream& operator<<(ostream& out, Candidat& obj)
{
    obj.afisare(out);

    return out;
}

void Candidat::afisare(ostream& out)
{
    out<<"Nume: "<<this->nume<<endl;
    out<<"Serie: "<<this->serie<<endl;
    out<<"Numar CI: "<<this->numarCI<<endl;
    out<<"Medie BAC: "<<this->medieBAC<<endl;
    out<<"Nota Proba: "<<this->notaProba<<endl;
    out<<"Medie admitere: "<<this->medieAdmitere<<endl;
    out<<"Program: "<<this->program<<endl;
    out<<"Categorie: "<<this->categorie<<endl;
    out<<"Cod: "<<this->cod<<endl;

    cout<<endl;
}

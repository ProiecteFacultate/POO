#ifndef PRODUS_H
#define PRODUS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Produs
{
private:
    int pret;
    int cantitate;
    static int id;

public:
    Produs(){};

    virtual operator>>(istream&);
    virtual ostream& operator<<(ostream&);

    int getPret(){return this->pret;}
    int getCantitate(){return this->cantitate;}

    static void setId(int);
    static void increaseId();
    static int getId();

};

#endif // PRODUS_H

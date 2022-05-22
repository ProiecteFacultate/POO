#include <iostream>
#include "Produs.h"
#include "Comanda.h"
#include "Ospatar.h"

using namespace std;

int Comanda::num;
int main()
{
   /* Comanda::setNum(0);

    Produs meniu[4] = { Produs("frigarui", 30), Produs("cola",7.5), Produs("cafea",5) };
    Comanda c1("frigarui", 2, 31, 5, 2016), c2("cola",3), c3("cafea",1), c4 = c2, c5;
    c3 = c3 + 4;
    c2++;
    c1.del();
    cin>>c5;
    cout << c4 << endl << c5;
    Comanda *com1 = new Comanda[4], *com2 = new Comanda[4];
    com1[0] = c1;
    com1[1] = c2;
    com1[2] = c3;
    com2[0] = c4;
    com2[1] = c5;
    Ospatar o1("Ionescu",com1,3,'M',25), o2("Popescu",com2,2,'F',30);

    cout << o1 << o2;

    if (o2 > o1) cout << " Ospatarul " << o2.nume() << " a servit mai multe comenzi decat ospatarul " << o1.nume() << endl;

    else if (o2 == o1) cout << " Numar egal de comenzi intre ospatarii " << o2.nume() << " si " << o1.nume() << endl;

    else cout << "Ospatarul " << o2.nume() << " a servit mai putine comenzi decat ospatarul " << o1.nume() << endl; */

    vector<Comanda*> vComenzi;

    int nrComenzi;
    vComenzi.resize(nrComenzi + 1);

    for(int i = 0; i < nrComenzi; i++)
        cin>>vComenzi[i];



    return 0;
}

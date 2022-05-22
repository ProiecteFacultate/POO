#include "Produs.h"
#include "Carte.h"
#include "Dvd.h"
#include "Dvd_Muzica.h"
#include "Dvd_film.h"
#include "Colectie.h"
#include "Colectie_figurina.h"
#include "Colectie_Poster.h"

#include "TestParent.h"
#include "TestChild.h"

#include "TestParent2.h"
#include "TestChild2.h"

#include <iostream>
#include <vector>

using namespace std;

string carteCautata;

int Produs::id;
int main()
{
    /*TestParent tp1;
    cin>>tp1;
    cout<<tp1;

    TestChild tc1;
    cin>>tc1;
    cout<<tc1;

    TestParent *tpc = new TestChild();
    cin>>*tpc;
    cout<<*tpc; */

    TestParent2 *tc = new TestChild2();
    tc->operator>>(cin);
    tc->operator<<(cout);



    /*int i;
    Produs::setId(0);
    Produs::increaseId();
    cout<<Produs::getId()<<endl;

    /*Produs *p2;
    p2 = new Carte();
    p2->operator>>(cin);
    p2->operator<<(cout);*/


    /* Produs p1;
     p1.operator>>(cin);
     p1.operator<<(cout);

     Carte c1;
     c1.operator>>(cin);
     c1.operator<<(cout);

     Dvd d1;
     d1.operator>>(cin);
     d1.operator<<(cout);

     Dvd_Muzica d1_m;
     d1_m.operator>>(cin);
     d1_m.operator<<(cout);

     Dvd_film d1_f;
     d1_f.operator>>(cin);
     d1_f.operator<<(cout);

     Colectie co;
     co.operator>>(cin);
     co.operator<<(cout);

     Colectie_figurina cf;
     cf.operator>>(cin);
     cf.operator<<(cout);

     Colectie_Poster cp;
     cp.operator>>(cin);
     cp.operator<<(cout);*/

   /* vector<Produs*> vProduse;
    Produs *prod;

    //inserare in vector

    Carte carte;
    carte.operator>>(cin);
    prod = &carte;
    vProduse.push_back(prod);

    Dvd dvd;
    dvd.operator>>(cin);
    prod = &dvd;
    vProduse.push_back(prod);

    Colectie co;
    co.operator>>(cin);
    prod = &co;
    vProduse.push_back(prod);

    Dvd_Muzica dm;
    dm.operator>>(cin);
    prod = &dm;
    vProduse.push_back(prod);

    Dvd_film df;
    df.operator>>(cin);
    prod = &df;
    vProduse.push_back(prod);

    Colectie_figurina cf;
    cf.operator>>(cin);
    prod = &cf;
    vProduse.push_back(prod);


    Colectie_Poster cp;
    cp.operator>>(cin);
    prod = &cp;
    vProduse.push_back(prod); */


    //ordonare dupa pret
  /*  for(int i = 0; i < vProduse.size() - 1; i++)
        for(int j = i + 1; j < vProduse.size(); j++)
            if(vProduse[j]->getPret() < vProduse[i]->getPret())
                swap(vProduse[i], vProduse[j]);

    //afisare dupa ordonare
    for(int i = 0 ; i < vProduse.size(); i++)
        vProduse[i]->operator<<(cout);


    //afisare prod cu cant max
    int maxCant = 0;

    for(int i = 0 ; i < vProduse.size(); i++)
        maxCant = max(maxCant, vProduse[i]->getCantitate());

    for(int i = 0 ; i < vProduse.size(); i++)
        if(vProduse[i]->getCantitate() == maxCant)
        {
            cout<<"PROD CU CANT MAXIMA: "<<endl;
            cout<<vProduse[i];
            break;
        }
        */


   /* vector<Produs*> v2Produse;
    v2Produse.resize(2);
    v2Produse[0] = new Carte();
    v2Produse[0]->operator>>(cin);
    v2Produse[0]->operator<<(cout);

    v2Produse[1] = new Dvd();
    v2Produse[1]->operator>>(cin);
    v2Produse[1]->operator<<(cout);

    for(i = 0; i < v2Produse.size(); i++)
    {
        if(typeid(*v2Produse[i]) == typeid(Carte))
            {
                if((dynamic_cast<Carte*> (v2Produse[i]))->getTitlu() == "Titlu")
                    cout<<i<<endl;
            }
    }*/

    return 0;

}

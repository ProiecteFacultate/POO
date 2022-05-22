#include <iostream>
#include "Candidat.h"
#include "Candidat_IF_1.h"
#include "Candidat_IF_2.h"
#include "Candidat_ID_1.h"
#include "Candidat_ID_2.h"

using namespace std;

int Candidat_IF_1::numarInregistrare;
int Candidat_IF_2::numarInregistrare;
int Candidat_ID_1::numarInregistrare;
int Candidat_ID_2::numarInregistrare;
int main()
{
    Candidat_IF_1::setNumarInregistrare(0);
    Candidat_IF_2::setNumarInregistrare(0);
    Candidat_ID_1::setNumarInregistrare(0);
    Candidat_ID_2::setNumarInregistrare(0);

    int nrCand;
    cin>>nrCand;
    string categorie, program;
    vector<Candidat*> vCandidati;
    vCandidati.resize(nrCand + 1);

    Candidat *c1 = new Candidat_ID_1();
    cin>>*c1;
    cout<<*c1;

    for(int i = 0; i < nrCand; i++)
    {
        cout<<endl;
        cout<<"Program__: ";

        cin>>program;
        cout<<"Categorie__: ";

        cin>>categorie;


        if(program == "IF")
        {
            if(categorie == "Prima")
            {
                Candidat *cand = new Candidat_IF_1();
                cin>>*cand;
                vCandidati[i] = cand;
            }
            else
            {
                Candidat *cand = new Candidat_IF_2();
                cin>>*cand;
                vCandidati[i] = cand;
            }
        }
        else
        {
            if(categorie == "Prima")
            {
                Candidat *cand = new Candidat_ID_1();
                cin>>*cand;
                vCandidati[i] = cand;
            }
            else
            {
                Candidat *cand = new Candidat_ID_2();
                cin>>*cand;
                vCandidati[i] = cand;
            }
        }
    }

    for(int i = 0; i < nrCand; i++)
        cout<<*vCandidati[i]<<endl;
}

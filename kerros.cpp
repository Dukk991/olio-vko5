#include "kerros.h"
#include "asunto.h"
#include "katutaso.h"
#include <iostream>

using namespace std;


Kerros::Kerros()
{
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;

    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    //destruktori
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);

    cout << "Kerros maaritetty, asukkaita = 8, nelioita = 400" << endl;
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
    cout << "Kerroksen kulutus kun hinta = " << hinta << " , on = " << kulutus << endl;
    return kulutus;
}

#include "katutaso.h"
#include "asunto.h"
#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    as1 = new Asunto;
    as2 = new Asunto;
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
    //destruktori
}

void Katutaso::maaritaAsunnot()
{
    cout <<"Maaritetaan 2 kpl katutason asuntoja" << endl;

    as1->maarita(2, 100);
    as2->maarita(2, 100);

    cout << "Katutaso maaritetty, asukkaita = 4, nelioita = 200" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta);
    cout << "Katutason kulutus kun hinta = " << hinta << " , on = " << kulutus << endl;
    return kulutus;
}

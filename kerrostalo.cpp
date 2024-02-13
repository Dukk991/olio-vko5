#include "kerrostalo.h"
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();

    cout << "Kerrostalo luotu" << endl;
    cout << "Lopuksi maaritetaan koko kerrostalon kaikki asunnot" << endl;
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
    //destruktori
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    return kulutus;
}

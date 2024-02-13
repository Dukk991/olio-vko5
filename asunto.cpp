#include "asunto.h"
#include <iostream>

using namespace std;


Asunto::Asunto()
{
    asukasMaara = new int;
    neliot = new int;
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{
    delete asukasMaara;
    delete neliot;
    //desktruktori
}

void Asunto::maarita(int asukasMaara, int neliot)
{
    cout << "Asunto maarietty, asukkaita = " << asukasMaara << ", nelioita = " << neliot << endl;
    this->asukasMaara = &asukasMaara;
    this->neliot = &neliot;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = hinta * (*asukasMaara) * (*neliot);
    cout << "Asunnon kulutus kun hinta = " << hinta << ", on = " << kulutus << endl;
    return kulutus;
}

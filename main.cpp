#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Kerrostalo *ptrObject;
    Kerrostalo kerrostalo;
    ptrObject = &kerrostalo;

    double hinta = 1;
    double kulutus = ptrObject->laskeKulutus(hinta);
    cout << "Kerrostalon kulutus kun hinta = " << hinta << " , on = " << kulutus << endl;
    return 0;
}

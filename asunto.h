#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>


class Asunto
{
public:
    Asunto();
    ~Asunto();

    int *asukasMaara;
    int *neliot;

    void maarita(int, int);
    double laskeKulutus(double);
};

#endif //ASUNTO_H

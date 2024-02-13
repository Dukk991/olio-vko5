#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

class Katutaso : public Asunto
{
public:
    Katutaso();
    ~Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto *as1;
    Asunto *as2;
};

#endif //KATUTASO.H

//
// Created by sga on 3/25/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_2_FORMAPATRAT_H
#define POO_LABORATOR_141_SEMIGRUPA_2_FORMAPATRAT_H


#include "Forma.h"

class FormaPatrat : public Forma {
    double latura;
    double AriaBazei();
public:
    FormaPatrat(): Forma(), latura(0) {}
    FormaPatrat(double h, double l) : Forma(h), latura(l) {}
    void Afisare();
    double GetLatura() { return latura; }
};


#endif //POO_LABORATOR_141_SEMIGRUPA_2_FORMAPATRAT_H

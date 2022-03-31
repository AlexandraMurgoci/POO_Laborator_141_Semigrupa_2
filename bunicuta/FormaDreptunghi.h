//
// Created by sga on 3/31/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_2_FORMADREPTUNGHI_H
#define POO_LABORATOR_141_SEMIGRUPA_2_FORMADREPTUNGHI_H


#include "Forma.h"

class FormaDreptunghi: public Forma {
    double laturamica, laturamare;
    double AriaBazei();

public:
    FormaDreptunghi(): Forma(), laturamica(0), laturamare(0) {}
    FormaDreptunghi(double h, double l, double L): Forma(h), laturamica(l), laturamare(L) {}
    void Afisare();

    double Getl(){ return laturamica; }
    double GetL(){ return laturamare; }

};


#endif //POO_LABORATOR_141_SEMIGRUPA_2_FORMADREPTUNGHI_H

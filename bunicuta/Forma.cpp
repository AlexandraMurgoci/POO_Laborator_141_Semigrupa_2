//
// Created by sga on 3/25/22.
//

#include "Forma.h"

void Forma::Afisare() {
    cout << "Forma: inaltimea " << inaltime;
}

double Forma::CantitateDeGem() {
    return 2 * Volum();
}

double Forma::Volum() {
    return inaltime * AriaBazei();
}

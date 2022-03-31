//
// Created by sga on 3/31/22.
//

#include "FormaDreptunghi.h"

double FormaDreptunghi::AriaBazei() {
    return laturamica*laturamare;
}

void FormaDreptunghi::Afisare() {
    cout<<"FormaDreptunghi: inaltime "<<inaltime<<", L= "<<laturamare<<", l= "<<laturamica<<".";
}
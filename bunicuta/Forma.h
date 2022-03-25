//
// Created by sga on 3/25/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_2_FORMA_H
#define POO_LABORATOR_141_SEMIGRUPA_2_FORMA_H

#include <iostream>

using namespace std;

class Forma {
protected:
    double inaltime;
private:
    virtual double AriaBazei()=0;
    double Volum();
public:
    Forma() : inaltime(0) {}
    Forma(double h) : inaltime(h) {}
    void SetInaltime(double h) { inaltime = h; }
    double GetInaltime() { return inaltime; }
    //virtual se asigura ca o FormaPatrat retinuta cu un pointer sau referinta la baza se afiseaza corect
    virtual void Afisare();
    double CantitateDeGem();
};


#endif //POO_LABORATOR_141_SEMIGRUPA_2_FORMA_H

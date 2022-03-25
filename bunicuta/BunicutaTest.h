//
// Created by sga on 3/25/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_2_BUNICUTATEST_H
#define POO_LABORATOR_141_SEMIGRUPA_2_BUNICUTATEST_H


#include "Forma.h"
#include "FormaPatrat.h"
#include <vector>

class BunicutaTest {
public:
    void TestMostenireMetode() {
        Forma forma;
        forma.SetInaltime(5);
        forma.Afisare();

        cout << endl;

        FormaPatrat formaPatrat;
        formaPatrat.SetInaltime(3);
        formaPatrat.Afisare();
    }

    void TestMostenireMetodePointeri() {
        Forma *forma = new Forma();
        forma->SetInaltime(5);
        forma->Afisare();

        cout << endl;

        Forma *formaPatrat = new FormaPatrat();
        formaPatrat->SetInaltime(3);
        formaPatrat->Afisare();
    }

    void TestCantitateGem() {
        //mai multe info: https://www.cplusplus.com/reference/vector/vector/
        vector<Forma*> toateFormele;

        FormaPatrat *formaPatrat1 = new FormaPatrat();
        toateFormele.push_back(formaPatrat1);

        FormaPatrat *formaPatrat2 = new FormaPatrat();
        toateFormele.push_back(formaPatrat2);

        double totalCantitateGem = 0;
        for(int i=0; i<toateFormele.size(); i++) {
//            totalCantitateGem+=toateFormele[i].GetCantitateGem();
        }
        cout << totalCantitateGem;
    }
};


#endif //POO_LABORATOR_141_SEMIGRUPA_2_BUNICUTATEST_H

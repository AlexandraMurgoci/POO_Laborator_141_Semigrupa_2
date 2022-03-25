//
// Created by sga on 3/25/22.
//

#include "ComplexTest.h"
#include "Complex.h"

void ComplexTest::TestConstructorWithoutParameters() {
    Complex c;
    if(c.GetReal() == 0 && c.GetImaginary() == 0) {
        cout << "TestConstructorWithoutParameters: OK";
    }
    else {
        cout << "TestConstructorWithoutParameters: KO";
    }
}
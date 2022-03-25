//
// Created by sga on 3/25/22.
//

#ifndef POO_LABORATOR_141_SEMIGRUPA_2_COMPLEX_H
#define POO_LABORATOR_141_SEMIGRUPA_2_COMPLEX_H


#include <iostream>

using namespace std;

class Complex {
    double m_real;
    double m_imaginary;
public:
    //constructori
    Complex() : m_real(0), m_imaginary(0) {}
    Complex(double real) : m_real(real), m_imaginary(0) {}
    Complex(double real, double imaginary)
            : m_real(real), m_imaginary(imaginary) {
        // Nu mai este nevoie de atribuire pentru ca am folosit constructorii
        // membrilor mai sus
        //        m_real = real; m_imaginary = imaginary;
    }
    //constructor de copiere
    Complex(Complex &complex)
            : m_real(complex.m_real), m_imaginary(complex.m_imaginary) {}
    //destructor
    ~Complex() {}

    // Getteri
    double GetReal() { return m_real; }
    double GetImaginary() { return m_imaginary; }

    // Setteri
    void SetReal(double real) { m_real = real; }
    void SetImaginary(double imaginary) { m_imaginary = imaginary; }

    // modulul unui numar complex
    double Abs();

    //operator =

    //alti operatori
    Complex operator+(Complex complex);

    friend Complex operator*(Complex c1, Complex c2);
    friend Complex operator/(Complex c1, Complex c2);

    //operator citire
    friend std::istream &operator>>(std::istream &in, Complex &complex);
    //operator afisare
    friend std::ostream &operator<<(std::ostream &out, Complex &complex);

};


#endif //POO_LABORATOR_141_SEMIGRUPA_2_COMPLEX_H

//
// Created by sga on 3/25/22.
//

#include "Complex.h"
#include <cmath>

double Complex::Abs() { return sqrt(m_real * m_real + m_imaginary * m_imaginary); }

Complex Complex::operator+(Complex complex) {
    Complex result(m_real + complex.m_real, m_imaginary + complex.m_imaginary);
    return result;
}

Complex operator*(Complex c1, Complex c2) {
    // (a + bi)(c + di) = ac - bd + i(ad + bc)
    Complex result;
    result.m_real = c1.m_real * c2.m_real - c1.m_imaginary * c2.m_imaginary;
    result.m_imaginary = c1.m_real * c2.m_imaginary + c1.m_imaginary * c2.m_real;
    return result;
}

Complex operator/(Complex c1, Complex c2) {
    Complex result;
    // declaram un complex tmp ca fiind conjugatul
    Complex tmp(c2.m_real, -c2.m_imaginary);
    result = c1 * tmp;
    // nu este modulul la patrat
    double nu = (c2.m_real * c2.m_real + c2.m_imaginary * c2.m_imaginary);
    result.m_real /= nu;
    result.m_imaginary /= nu;

    return result;
}

std::istream &operator>>(std::istream &in, Complex &complex) {
    in >> complex.m_real >> complex.m_imaginary;
    return in;
}

std::ostream &operator<<(std::ostream &out, Complex &complex) {
    if (complex.m_real != 0 && complex.m_imaginary != 0)
    {
        //afisare a+i*b sau a-i*b
        if (complex.m_imaginary < 0)
        {
            //afisare a-i*b
            out << complex.m_real << "-i*" << -complex.m_imaginary;
        }
        else
        {
            //afisare a+i*b
            out << complex.m_real << "+i*" << complex.m_imaginary;
        }
    }
    else if (complex.m_imaginary == 0)
    {
        out << complex.m_real;
    }
    else
    { // complex.m_real == 0
        if (complex.m_imaginary < 0) {
            out << "-i*" << -complex.m_imaginary;
        }
        else
            out << "i*" << complex.m_imaginary;
    }
    return out;
}

#include <iostream>
#include "Fraction.hpp"

using namespace std;
using namespace ariel;


Fraction::Fraction(int num1,int num2):numerator(num1),denominator(num2){}
std::ostream& ariel::operator<<(std::ostream& os, const Fraction& f) {
    os <<" " << f.numerator << "/" << f.denominator;
    return os;
}

Fraction Fraction::operator+(const Fraction& other) const{return other;}
Fraction Fraction::operator-(const Fraction& other) const{return other;}
Fraction Fraction::operator/(const Fraction& other) const{return other;}
Fraction Fraction::operator*(const Fraction& other) const{return other;}

Fraction Fraction::operator++(int){return *this;}
Fraction& Fraction::operator--(){return *this;}

Fraction Fraction::operator+( double other) const{return *this;}
Fraction Fraction::operator-( double other) const{return *this;}



bool Fraction::operator>( double other) const{return false;}
bool Fraction::operator>=(const Fraction& other) const{return false;}

ariel::Fraction ariel::operator*(double d, const ariel::Fraction& f) {
    return f;
}






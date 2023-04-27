#include <iostream>
#include "Fraction.hpp"

using namespace std;
using namespace ariel;


Fraction::Fraction(int num1,int num2):numerator(num1),denominator(num2){}
Fraction::Fraction(float num1){
    numerator=1;
    denominator=1;
}

void Fraction::set(int numerator, int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
}


Fraction Fraction::operator+(const Fraction& other) const{return other;}
Fraction Fraction::operator-(const Fraction& other) const{return other;}
Fraction Fraction::operator*(const Fraction& other) const{return other;}
Fraction Fraction::operator/(const Fraction& other) const{return other;}


bool Fraction::operator==(const Fraction& other) const {return false;}
bool Fraction::operator!=(const Fraction& other) const {return false;}
bool Fraction::operator<(const Fraction& other) const {return false;}
bool Fraction::operator<=(const Fraction& other) const {return false;}
bool Fraction::operator>(const Fraction& other) const {return false;}
bool Fraction::operator>=(const Fraction& other) const {return false;}



Fraction& Fraction::operator++(){return *this;}
Fraction Fraction::operator++(int){return *this;}
Fraction& Fraction::operator--(){return *this;}
Fraction Fraction::operator--(int){return *this;}



std::ostream& ariel::operator<<(std::ostream& oos, const Fraction& fract) {
    oos <<" " << fract.numerator << "/" << fract.denominator;
    return oos;
}

std::istream& operator>>(std::istream& iis, Fraction& fract) {
    int numerator, denominator;
    char c;
    iis >> numerator >> c >> denominator;
    if (c != '/') {
        iis.setstate(std::ios::failbit);
        return iis;
    }
    fract = Fraction(numerator, denominator);
    return iis;
}

bool ariel::operator==(const float& fract, const Fraction& other) {return false;}
bool ariel::operator!=(const float& fract, const Fraction& other) {return false;}
bool ariel::operator<(const float& fract, const Fraction& other) {return false;}
bool ariel::operator<=(const float& fract, const Fraction& other) {return false;}
bool ariel::operator>(const float& fract, const Fraction& other) {return false;}
bool ariel::operator>=(const float& fract, const Fraction& other) {return false;}



Fraction ariel::operator+(const float& fract, const Fraction& other)  { return Fraction(0,0);}
Fraction ariel::operator-(const float& fract, const Fraction& other)  { return Fraction(0,0);}
Fraction ariel::operator*(const float& fract, const Fraction& other)  { return Fraction(0,0);}
Fraction ariel::operator/(const float& fract, const Fraction& other)  { return Fraction(0,0);}









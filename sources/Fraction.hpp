#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>


namespace ariel {
    class Fraction {
        int numerator;
        int denominator;

        public:
            Fraction(int num1,int num2);
            friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
            Fraction operator+(const Fraction& other) const;
            Fraction operator-(const Fraction& other) const;
            Fraction operator/(const Fraction& other) const;
            Fraction operator*(const Fraction& other) const;

            Fraction operator++(int); // C++
            Fraction& operator--(); // --C
            
            Fraction operator+( double other) const;
            Fraction operator-( double other) const;

            bool operator>( double other) const;
            bool operator>=(const Fraction& other) const;



    };

Fraction operator*(double d, const Fraction& f);
};


#endif
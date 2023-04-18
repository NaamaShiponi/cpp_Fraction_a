#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>


namespace ariel {
    class Fraction {
        int numerator;
        int denominator;

        public:
            Fraction(int num1,int num2);
            Fraction(float num1);

            void set(int numerator, int denominator);

            Fraction operator+(const Fraction& other) const;
            Fraction operator-(const Fraction& other) const;
            Fraction operator*(const Fraction& other) const;
            Fraction operator/(const Fraction& other) const;            


            bool operator==(const Fraction& other) const;
            bool operator!=(const Fraction& other) const;
            bool operator<(const Fraction& other) const;
            bool operator<=(const Fraction& other) const;
            bool operator>(const Fraction& other) const;
            bool operator>=(const Fraction& other) const;

            
            Fraction& operator++(); // ++C
            Fraction operator++(int); // c ++
            Fraction& operator--(); // --c
            Fraction operator--(int); // c--


            friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
            friend std::istream& operator>>(std::istream& is, Fraction& f);


            friend bool operator==(const float& f, const Fraction& other);
            friend bool operator!=(const float& f, const Fraction& other);
            friend bool operator<(const float& f, const Fraction& other);
            friend bool operator<=(const float& f, const Fraction& other);
            friend bool operator>(const float& f, const Fraction& other);
            friend bool operator>=(const float& f, const Fraction& other);



            friend Fraction operator+(const float& f, const Fraction& other);
            friend Fraction operator-(const float& f, const Fraction& other);
            friend Fraction operator*(const float& f, const Fraction& other);
            friend Fraction operator/(const float& f, const Fraction& other);
    };


};


#endif
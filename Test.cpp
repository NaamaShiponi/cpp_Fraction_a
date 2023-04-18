#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdexcept>
#include <iostream>


using namespace std;
using namespace ariel;


TEST_CASE("Fraction Division and Initialization Errors"){
    Fraction num(1,3);
    CHECK_THROWS(num/0);
    CHECK_THROWS(0/num);
    CHECK_THROWS((Fraction(0,3)));
    CHECK_THROWS((Fraction(2,0)));


}

TEST_CASE("Tests the comparison operators of the Fraction class"){
    Fraction nun1(2,10), nun2(1,10);

    CHECK(false == (nun2==nun1));

    CHECK(true == (nun2!=nun1)); // 1/10!=2/10

    CHECK(true == (nun2<=nun1)); // 1/10<=2/10
    
    CHECK(false==(nun2>=nun1));
    
    CHECK(true==(nun2<nun1)); // 1/10<2/10
    
    CHECK(false==(nun2>nun1));

}



TEST_CASE("Tests the comparison operators of the decimal number with a Fraction class ."){
    Fraction num(2,10);

    CHECK(false==(3.89==num)); 
    
    CHECK(true==(3.89!=num)); // 3.89!=2/10 

    CHECK(false==(3.89<=num));
    
    CHECK(true==(3.89>=num)); // 3.89>=2/10 
    
    CHECK(false==(3.89<num)); 
    
    CHECK(true==(3.89>num)); //3.89>2/10
}



TEST_CASE("Tests the comparison operators of the Fraction class with a decimal number"){
    Fraction num(2,10);
    
    CHECK(false==(num==2.90));

    CHECK(true==(num!=2.90)); // 2/10!=2.90 
    
    CHECK(true==(num<=2.90)); // 2/10<=2.90 
    
    CHECK(false==(num>=2.90));
    
    CHECK(true==(num<2.90)); // 2/10<2.90
 
    CHECK(false==(num>2.90)); 
}
   


TEST_CASE("Tests the ++ and -- operators of the Fraction class.")
{
    Fraction num(2,10);
    Fraction answer(2,10);
    CHECK(answer==num++);// return 2/10 then do num=2/5=2/10+2/10 
    answer.set(2,5);
    CHECK(answer==num); // 2/5==2/5

    answer.set(4,5);
    CHECK(answer==++num);// Do num=4/5=2/5+2/5 then return 4/5  

    answer.set(4,5);
    CHECK(answer==num--);// return 4/5 then do num=0=4/5-4/5
    answer.set(0,0);
    CHECK(answer==num);// 0==0
    
    num.set(2,10);
    answer.set(2,5);
    CHECK(answer==--num);// Do num=2/5-2/5 then return 0  
}



TEST_CASE("Tests the arithmetic operators of the Fraction class.")
{
    Fraction nun1(2,10), nun2(1,10);
    Fraction answer(3,10);
    CHECK(answer==(nun2+nun1)); // 2/10 + 1/10 = 3/10

    answer.set(1,10);
    CHECK(answer==(nun2-nun1)); // 2/10 - 1/10 = 1/10

    answer.set(1,50);
    CHECK(answer==(nun2*nun1)); // 2/10 * 1/10 = 1/50
    
    answer.set(2,1);    
    CHECK(answer==(nun2/nun1)); // 2/10 / 1/10 = 2/1 
}



TEST_CASE("Tests the arithmetic operators of the decimal number with a Fraction class"){
    Fraction num(2,10);
    Fraction answer(409,100);
    //3.89 -> (3.89*100)/100= 389/100
    
    CHECK(answer==(3.89+num)); // 389/100 + 2/10 = 409/100
    
    answer.set(369,100);
    CHECK(answer==(3.89-num)); // 389/100 - 2/10 = 369/100

    answer.set(389,500);
    CHECK(answer==(3.89*num)); // 389/100 * 2/10 = 389/500

    answer.set(389,20);
    CHECK(answer==(3.89/num)); // 389/100 / 2/10 = 389/20

    
}



TEST_CASE("Tests the arithmetic operators of the Fraction class with a decimal number"){
    Fraction num(2,10);
    Fraction answer(409,100);
    //3.89 -> (3.89*100)/100= 389/100
    
    CHECK(answer==(num+3.89)); // 389/100 + 2/10 = 409/100
    
    answer.set(369,100);
    CHECK(answer==(num-3.89)); // 389/100 - 2/10 = 369/100

    answer.set(389,500);
    CHECK(answer==(num *3.89)); // 389/100 * 2/10 = 389/500

    answer.set(389,20);
    CHECK(answer==(num/3.89)); // 389/100 / 2/10 = 389/20
}

TEST_CASE("Checks the order of arithmetic operations with complex equations"){
    Fraction num1(2,10),num2(3,10),num3(6,10);
    Fraction answer(3,10);

    CHECK(answer==(num1+num2*num3-num1/num2)); // 2/10 + (3/10 * 6/10) - (2/10 / 3/10) = -43/150
    CHECK(answer==(num1-2.34*num3-num1/6.43)); // 2/10 - (234/100 * 6/10) - (2/10 / 643/100) = -247/100

}

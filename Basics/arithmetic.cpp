#include <iostream>

int main() {
    //arithmetic operators = returns the result of a specific
    //                        arithmetic operation (+ - * /)

int x = 10;

//x = x+1;// will print 11
//x+=1;// will print 11
//x+=3; // will print 13
//x++; // increament operator increases by one 

//x = x-1;// will print 9
//x-=1;// will print 9
//x-=3;// will print 7
//x--;// decreament operator decreases by one 

//x = x*2;
x*=2;

//x = x/2;
//x/=2;

int remainder = x % 3;// x % 3 gives the remainder when x is divided by 3
// remember BODMAS is applicable here
//int x = 6 - 5 + 4 * 3 / 2; // therefore answer is 7
std::cout<< x <<'\n';
std::cout<< remainder <<'\n';



    return 0;
}
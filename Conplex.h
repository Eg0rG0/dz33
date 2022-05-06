
#ifndef DZ3_CONPLEX_H
#define DZ3_CONPLEX_H
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

struct Complex {
    double re, im;
    Complex (double r, double i){
        re = r;
        im = i;
    }
    Complex(){
        re = 0;
        im = 0;
    }
    Complex info();
    friend ostream &operator<<(ostream &, Complex x);
    friend istream &operator>>(istream &, Complex x);
    friend Complex &operator+(Complex &x, Complex &y);
    friend Complex &operator-(Complex &x, Complex &y);
    friend Complex &operator*(Complex &x, Complex &y);
    friend Complex &operator/(Complex &x, Complex &y);
};


#endif //DZ3_CONPLEX_H

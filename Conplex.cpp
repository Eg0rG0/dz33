#include "Conplex.h"

#include "Complex.h"
#include <iostream>
#include <string>
#include "cmath"
#include "math.h"

Complex Complex :: info(){
    cout << "Welcome to the class of complex numbers." << endl << "You can perform various arithmetic operations with them " << endl;
    cout << "Here is your number: " << Complex(this-> re, this-> im) <<endl;
}

ostream &operator<<(ostream &out, Complex x){
    if (x.im > 0){
        out << x.re << " +" << x.im << "i" << endl;
    }
    if (x.im < 0){
        out << x.re << " " << x.im << "i" << endl;
    }
    if (x.im == 0) {
        out << x.re <<endl;
    }
    return out;
}
istream &operator>>(istream &in, Complex x){

    in >> x.re >> x.im;

    return in;
}
Complex &operator + (Complex &x, Complex &y){
    Complex a;
    a.re = x.re + y.re;
    a.im = x.im + y.im;
    return a;
}
Complex &operator - (Complex &x, Complex &y){
    Complex a;
    a.re = x.re - y.re;
    a.im = x.im - y.im;
    return a;
}
Complex &operator * (Complex &x, Complex &y){
    Complex a;
    a.re = x.re * y.re;
    a.im = x.im * y.im;
    return a;
}
Complex &operator / (Complex &x, Complex &y){
    Complex a(0,0);
    a.re = x.re / y.re;
    a.im = x.im / y.im;
    return a;
}

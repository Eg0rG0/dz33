#include <iostream>
#include "circle.h"
#include "cmath"
#include "math.h"

circle circle::info() {
    cout << "Welcome to the circle class. " << endl << "you can find the diameter, circumference and area of a circle" << endl;
    cout << "Radius for your circle is " << this-> r << endl << endl;
}

double circle :: diameter(){
    return this->r*2;
}
double circle ::length() {
    return 2*M_PI*this->r;
}

double circle ::square() {
    return M_PI* pow(this->r,2);
}


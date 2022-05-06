#include <iostream>
#include <string>
#include "Vector.h"
#include "cmath"
#include "math.h"


Vector Vector ::info() {
    cout << "Welcome to the vector class. " << endl << "You can find out the length of a vector, find the scalar product of vectors and the angle between them" <<endl;
    cout << "Here are the coordinates of your vector: " << "x = " << this-> x << "  y = " << this-> y << endl << endl;
}

double Vector ::length() {
    return pow(this->x,2) +  pow(this->y,2);
}

double Vector :: mult(Vector a){
    return a.x *this->x + a.y * this->y;
}

double Vector ::angle(Vector a) {
    return acos((a.x*this->x+a.y *this->y)/(sqrt(a.length())*sqrt(pow(this->x,2)+pow(this->y,2))))*180/M_PI;
}




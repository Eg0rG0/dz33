#ifndef DZ3_VECTOR_H
#define DZ3_VECTOR_H
#include "cmath"
#include "math.h"

using namespace std;
class Vector {
public:
    double x,y;
    Vector(double x1, double y1){
        x = x1;
        y = y1;
    }
    Vector info();
    double angle(Vector x);
    double length();
    double mult(Vector a);
    string Get() {
        return "(" + to_string(x) + " , " + to_string(y) + ")";
    }

};


#endif //DZ3_VECTOR_H

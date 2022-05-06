#ifndef DZ3_CIRCLE_H
#define DZ3_CIRCLE_H

using namespace std;

class circle {
public:
    double r;
    circle(double x){
        this->r = x;
    }

    double diameter();
    double length();
    double square();
    circle info();
};



#endif //DZ3_CIRCLE_H

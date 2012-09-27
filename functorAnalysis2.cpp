
#include <iostream>
using namespace std;

class Line {
    double a;
    double b;

public:

    void fucky();
    Line(double slope = 1, double yintercept = 1):
        a(slope),b(yintercept){}
    double operator()(double x){
            cout << x << endl;
            this->fucky();
            return a * x;
    }


};

void Line::fucky(){

    cout << "This will fuck with your shit" << endl;
    cout << "I promise" << endl;




}

int main() {
    Line fa;
    Line fb(5.0,10.0);

    double y1 = fa(5.0);
    double y2 = fb(1.0);

    cout << "y1 = " << y1 << " y2 = " << y2 << endl;

    return 0;
}

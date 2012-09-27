#include <iostream>

using namespace std;

struct absValue{

    float operator()(float f){
        return f > 0 ? f : -f;
    }

};
int main(){

    float f = -123.45;
    absValue aObj;
    float abs_f =aObj(f);
    cout << "f = " << f << " abs_f = " << abs_f << endl;

    return 0;
}

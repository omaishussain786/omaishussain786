#include <iostream>
using namespace std;

class Temperature{
    double celsius;
public:
    Temperature(double c){ celsius=c; }

    operator double(){
        return celsius*9.0/5.0+32.0;
    }
};

int main(){
    Temperature t(30);
    double fahrenheit=t;
    cout<<fahrenheit<<endl;
    return 0;
}
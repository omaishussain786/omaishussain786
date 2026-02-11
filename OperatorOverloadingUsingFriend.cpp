#include <iostream>
using namespace std;

class Distance{
    int meters;
public:
    Distance(int m=0){ meters=m; }

    friend Distance operator+(const Distance &a,const Distance &b);

    int value() const{
        return meters;
    }
};

Distance operator+(const Distance &a,const Distance &b){
    Distance temp(a.meters+b.meters);
    return temp;
}

int main(){
    Distance d1(35),d2(45);
    Distance d3=d1+d2;
    cout<<d3.value()<<endl;
    return 0;
}
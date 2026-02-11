#include <iostream>
using namespace std;

class Distance{
private:
    int meters;
public:
    Distance(){
        meters=0;
    }
    Distance(int m){
        meters=m;
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.meters=meters+d.meters;
        return temp;
    }
    int get(){
        return meters;
    }
};

int main(){
    Distance d1(15),d2(25),d3;
    d3=d1+d2;
    cout<<d3.get()<<endl;
    return 0;
}
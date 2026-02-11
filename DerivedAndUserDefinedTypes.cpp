#include <iostream>
using namespace std;

struct Measurement{
    int length;
    int width;
};

class AreaCalculator{
private:
    Measurement data;
public:
    void set(int l,int w){
        data.length=l;
        data.width=w;
    }
    int area(){
        return data.length*data.width;
    }
};

int main(){
    AreaCalculator a;
    a.set(12,8);
    cout<<a.area()<<endl;
    return 0;
}
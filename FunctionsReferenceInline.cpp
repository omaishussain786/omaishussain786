#include <iostream>
using namespace std;

class Mathematics{
public:
    inline int square(int x){
        return x*x;
    }
    void increase(int &x){
        x=x+5;
    }
};

int main(){
    Mathematics m;
    int value=4;
    cout<<m.square(value)<<endl;
    m.increase(value);
    cout<<value<<endl;
    return 0;
}
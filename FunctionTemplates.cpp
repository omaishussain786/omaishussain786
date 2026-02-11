#include <iostream>
using namespace std;

template<class T>
class Compare{
public:
    T maximum(T a,T b){
        return (a>b)?a:b;
    }
};

int main(){
    Compare<int> ci;
    Compare<double> cd;
    cout<<ci.maximum(5,9)<<endl;
    cout<<cd.maximum(4.5,2.1)<<endl;
    return 0;
}
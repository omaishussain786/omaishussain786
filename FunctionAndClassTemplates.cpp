#include <iostream>
using namespace std;

template<typename T>
T maximumValue(T a,T b){
    return (a>b)?a:b;
}

template<typename T>
class Storage{
    T data;
public:
    Storage(T d){ data=d; }
    T get(){
        return data;
    }
};

int main(){
    cout<<maximumValue(5,9)<<endl;
    cout<<maximumValue(4.5,6.1)<<endl;

    Storage<int> s1(50);
    Storage<string> s2("OOPS");

    cout<<s1.get()<<endl;
    cout<<s2.get()<<endl;

    return 0;
}
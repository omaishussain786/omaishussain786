#include <iostream>
using namespace std;

class Computation{
private:
    static int count;
public:
    Computation(){
        count++;
    }
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
    static int objectsCreated(){
        return count;
    }
};

int Computation::count=0;

int main(){
    Computation c1,c2;
    cout<<c1.sum(2,3)<<endl;
    cout<<c2.sum(1,2,3)<<endl;
    cout<<Computation::objectsCreated()<<endl;
    return 0;
}
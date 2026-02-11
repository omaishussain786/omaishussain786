#include <iostream>
using namespace std;

class Division{
public:
    double calculate(int a,int b){
        if(b==0)
            throw b;
        return (double)a/b;
    }
};

int main(){
    Division d;
    try{
        cout<<d.calculate(20,4)<<endl;
        cout<<d.calculate(10,0)<<endl;
    }
    catch(int){
        cout<<"Division by zero"<<endl;
    }
    return 0;
}
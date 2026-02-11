#include <iostream>
using namespace std;

class Calculator{
public:
    double divide(int a,int b){
        try{
            if(b==0)
                throw b;
            return (double)a/b;
        }
        catch(int){
            throw;
        }
    }
};

int main(){
    Calculator c;
    try{
        cout<<c.divide(20,2)<<endl;
        cout<<c.divide(10,0)<<endl;
    }
    catch(int){
        cout<<"Invalid division"<<endl;
    }
    return 0;
}
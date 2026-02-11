#include <iostream>
using namespace std;

class IntegerList{
private:
    int *values;
    int size;
public:
    IntegerList(int s){
        size=s;
        values=new int[size];
        for(int i=0;i<size;i++)
            values[i]=(i+1)*2;
    }
    int total(){
        int sum=0;
        for(int i=0;i<size;i++)
            sum+=values[i];
        return sum;
    }
    ~IntegerList(){
        delete[] values;
    }
};

int main(){
    IntegerList list(6);
    cout<<list.total()<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Statistics{
public:
    void compute(int a,int b,int c,int &sum,double &average){
        sum=a+b+c;
        average=sum/3.0;
    }
};

int main(){
    Statistics s;
    int total;
    double avg;
    s.compute(10,20,30,total,avg);
    cout<<total<<" "<<avg<<endl;
    return 0;
}
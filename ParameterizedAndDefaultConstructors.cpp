#include <iostream>
using namespace std;

class Room{
private:
    int length;
    int width;
public:
    Room(){
        length=0;
        width=0;
    }
    Room(int l,int w){
        length=l;
        width=w;
    }
    int area(){
        return length*width;
    }
};

int main(){
    Room r1;
    Room r2(10,6);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    return 0;
}
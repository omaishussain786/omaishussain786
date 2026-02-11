#include <iostream>
using namespace std;

class FileBuffer{
    int size;
public:
    FileBuffer(int s){
        if(s<=0)
            throw s;
        size=s;
    }
    int getSize(){
        return size;
    }
};

int main(){
    try{
        FileBuffer f1(128);
        cout<<f1.getSize()<<endl;
        FileBuffer f2(-5);
        cout<<f2.getSize()<<endl;
    }
    catch(int){
        cout<<"Invalid buffer size"<<endl;
    }
    return 0;
}
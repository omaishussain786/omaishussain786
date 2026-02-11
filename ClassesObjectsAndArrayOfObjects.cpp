#include <iostream>
#include <string>
using namespace std;

class StudentRecord{
private:
    int roll;
    string name;
public:
    void set(int r,string n){
        roll=r;
        name=n;
    }
    void display(){
        cout<<roll<<" "<<name<<endl;
    }
};

int main(){
    StudentRecord students[3];
    students[0].set(1,"Aamir");
    students[1].set(2,"Faizan");
    students[2].set(3,"Suhail");
    for(int i=0;i<3;i++)
        students[i].display();
    return 0;
}
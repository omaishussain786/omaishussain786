#include <iostream>
#include <string>
using namespace std;

class StudentProfile{
    int roll;
    string name;
public:
    StudentProfile(){ roll=0; name=""; }
    StudentProfile(int r,string n){ roll=r; name=n; }

    StudentProfile updateName(string n){
        StudentProfile temp(roll,n);
        return temp;
    }

    void show() const{
        cout<<roll<<" "<<name<<endl;
    }
};

int main(){
    StudentProfile s1(12,"Irfan");
    StudentProfile s2=s1.updateName("Irfan Ahmad");

    StudentProfile *ptr=&s2;
    ptr->show();
    return 0;
}
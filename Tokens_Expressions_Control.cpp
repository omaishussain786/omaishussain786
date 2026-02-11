#include <iostream>
#include <string>
using namespace std;

class LanguageElements{
private:
    int integerValue;
    double realValue;
    char grade;
    string title;
public:
    void setValues(int i,double r,char g,string t){
        integerValue=i;
        realValue=r;
        grade=g;
        title=t;
    }
    double evaluateExpression(){
        double result;
        result=(integerValue*realValue)+grade;
        return result;
    }
    void show(){
        cout<<integerValue<<endl;
        cout<<realValue<<endl;
        cout<<grade<<endl;
        cout<<title<<endl;
        cout<<evaluateExpression()<<endl;
    }
};

int main(){
    LanguageElements obj;
    obj.setValues(10,5.5,'A',"CPlusPlus");
    obj.show();
    return 0;
}
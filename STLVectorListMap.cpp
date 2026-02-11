#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

class ContainerOperations{
public:
    void process(){
        vector<int> v;
        for(int i=1;i<=5;i++)
            v.push_back(i*3);

        list<int> l;
        for(int i=0;i<5;i++)
            l.push_back(v[i]);

        map<int,int> m;
        int key=1;
        for(int x:l){
            m[key]=x;
            key++;
        }

        for(auto p:m)
            cout<<p.first<<" "<<p.second<<endl;
    }
};

int main(){
    ContainerOperations obj;
    obj.process();
    return 0;
}
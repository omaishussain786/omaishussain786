#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class NumberSet{
    vector<int> values;
public:
    void fill(){
        for(int i=1;i<=10;i++)
            values.push_back(i*3);
    }

    void process(){
        sort(values.begin(),values.end());
        reverse(values.begin(),values.end());
    }

    void show(){
        vector<int>::iterator it;
        for(it=values.begin();it!=values.end();++it)
            cout<<*it<<" ";
        cout<<endl;
    }
};

int main(){
    NumberSet n;
    n.fill();
    n.process();
    n.show();
    return 0;
}
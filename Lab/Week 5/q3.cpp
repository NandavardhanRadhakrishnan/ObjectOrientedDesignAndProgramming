#include <iostream>

using namespace std;

class Area{
public:
    void calc(int a,int b){
        cout<<a*b<<endl;
    }
    void calc(int a){
        cout<<a*a<<endl;
    }
};

int main(){
    Area a1,a2;
    a1.calc(5,4);
    a2.calc(5);
}
#include <iostream>
using namespace std;
class vol{
public:
    void calc(int side){cout<<side*side*side<<endl;}
    void calc(double radius){cout<<(4/3)*(22/7)*radius*radius*radius<<endl;}
    void calc(int height, int radius){cout<<(22/7)*(radius*radius)*height<<endl;}
};

int main(){
    vol v1,v2,v3;
    v1.calc(5);
    v2.calc(6.0);
    v3.calc(5,2);
}

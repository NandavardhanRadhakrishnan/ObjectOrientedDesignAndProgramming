#include <iostream>
using namespace std;

class Number
{
private:
    int n;
public:
    Number()
    {
        cout<<"Enter a decimal number:";
        cin>>n;
    }
    ~Number()
    {
        string r;
        while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
        cout<<"\nBinary Number:"<<r;
    }
};

int main()
{
    Number num;
    return 0;
}

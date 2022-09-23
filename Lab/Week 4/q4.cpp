#include <iostream>
using namespace std;

class Number
{
private:
    int num;
public:
    Number()
    {
        cout<<"Enter a Number :";
        cin>>num;
    }
    ~Number()
    {
        cout<<"Volume of cube of side:"<<num<<" is:"<<num*num*num;
    }
};

int main()
{
    Number n;
    return 0;
}

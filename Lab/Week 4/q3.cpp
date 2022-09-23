#include <iostream>
using namespace std;

class Number
{
private:
    int num;
public:
    Number()
    {
        cout<<"Enter a Number:";
        cin>>num;
    }
    ~Number()
    {
        int i;
        for(i=1;i<=num;i++)
        {
            cout<<"Cube of "<<i<<" is:"<<i*i*i<<"\n";
        }
    }
};

int main()
{
    Number n;
    return 0;
}

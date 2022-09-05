#include <iostream>

using namespace;

class Number
{
private:
    int n;
public:
    Number()
    {
        cin>>n;
    }
    void  isEvenOrOdd()
    {
        if(n==0)
        {
            cout<<"The number is Zero"<<endl;
        }
        else if(n%2==0)
        {
            cout<<"The number is Even"<<endl;
        }
        else if(n%2!=0)
        {
            cout<<"The number is Odd"<<endl;
        }

    }
};

int main()
{
    Number n;
    n.isEvenOrOdd();
    return 0;
}

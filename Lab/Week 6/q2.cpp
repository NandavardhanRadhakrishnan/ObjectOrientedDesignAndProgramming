#include <iostream>
using namespace std;
class Complex
{
private:
    int r,c;
public:
    Complex(){r=0;c=0;} //constructor w/o inputing value
    Complex(int i) // constructor for taking input
    {
        cout<<"Enter real part:";
        cin>>r;
        cout<<"Enter complex part:";
        cin>>c;
    }
    void Display()
    {
        cout<<r<<","<<c<<endl;
    }
    Complex operator+(Complex b)
    {
        Complex result;
        result.r = (r+b.r);
        result.c = (c+b.c);
        return result;
    }
};

int main()
{
    Complex a(1),b(1),res;
    res = a+b;
    res.Display();
    return 0;
}

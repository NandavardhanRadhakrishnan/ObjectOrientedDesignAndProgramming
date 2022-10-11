#include <iostream>
#include <string>

using namespace std;

class Str
{
public:
    string s;
    void getInput()
    {
        cin>>s;
    }
    operator+(Str t)
    {
        string temp;
        temp = s;
        cout<<temp<<s<<t.s<<endl;
        s = t.s;
        cout<<temp<<s<<t.s<<endl;
        t.s = temp;
        cout<<temp<<s<<t.s<<endl;
    }
    void Display(){cout<<s;}
    //friend void operator+(Str&);
};

int main()
{
    Str a,b;
    a.getInput();
    b.getInput();
    a+b;
    a.Display();
    cout<<endl;
    b.Display();
    return 0;
}

#include <iostream>
using namespace std;

class Str
{
private:
    string s;
public:
    Str(){cin>>s;}
    operator++(int)
    {
        return(s.compare(s.reverse(s.begin,s.end)))
    }
};

int main()
{
    Str a;
    cout<<a++;
    return 0;
}

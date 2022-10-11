#include <iostream>
using namespace std;
class Rectangle
{
private:
    int w,h;
public:
    Rectangle(){cin>>w>>h;}
    operator++(int){cout<<(w*h);}
};

int main()
{
    Rectangle r;
    r++;
    return 0;
}

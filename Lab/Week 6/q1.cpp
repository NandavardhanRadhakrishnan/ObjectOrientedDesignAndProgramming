#include <iostream>
#include <string>

using namespace std;

class Str
{
private:
    string s;
public:
    Str(){cin>>s;}
    int operator>(Str a){
        return s.compare(a.s);
    }
};

int main(){
    Str a,b;
    cout<<(a>b);
    return 0;
}

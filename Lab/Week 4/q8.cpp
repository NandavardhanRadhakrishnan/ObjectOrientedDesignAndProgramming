#include <iostream>
using namespace std;
class Person
{
private:
    string FirstName;
    string LastName;

public:
    Person()
    {
        FirstName = "";
        LastName = "";
    }
    Person(string f)
    {
        FirstName = f;
        LastName = "";
    }
    Person(string f, string l)
    {
        FirstName = f;
        LastName = l;
    }
};

int main()
{
    return 0;
}

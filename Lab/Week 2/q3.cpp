#include <iostream>

using namespace std;

class Year
{
private:
    int num;
public:
    Year()
    {
        cin>>num;
    }

    void isLeapOrNot()
    {
        if(num%4==0)
        {
            cout<<"The year is a leap year";
        }
        else
        {
            cout<<"The year is not a leap year";
        }
    }
};

int main()
{
    Year y;
    y.isLeapOrNot();
    return 0;
}

#include <iostream>

using namespace std;

class number
{
private:
    int n;

public:
    number(int num)
    {
        n = num;
    }
    int IsDivisibleBy(int num)
    {
        if (n % num == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int IsDivisibleByEightAndFive()
    {
        if (IsDivisibleBy(8) && IsDivisibleBy(5))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    for (int i = 1000; i <= 2000; i++)
    {
        number n(i);
        if (n.IsDivisibleByEightAndFive())
        {
            cout << i << endl;
        }
    }
}

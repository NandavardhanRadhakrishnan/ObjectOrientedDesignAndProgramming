#include <iostream>

using namespace std;

class Number
{
private:
    int n;

public:
    Number(int num)
    {
        n = num;
    }
    int IsPrime()
    {
        int i;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    for (int i = 100; i <= 500; i++)
    {
        Number num(i);
        if (num.IsPrime())
        {
            cout << i << endl;
        }
    }
    return 0;
}
#include <iostream>

using namespace std;

class number
{
    private:
        int n;
    public:
        number()
        {
            cin>>n;
        }

        void isPositiveOrNegative()
        {
            if(n>=0)
            {
                cout<<"The number is Positive"<<endl;
            }
            else if(n<0)
            {
                cout<<"The Number is Negative"<<endl;
            }
        }
};

int main()
{
    number n;
    n.isPositiveOrNegative();
    return 0;
}


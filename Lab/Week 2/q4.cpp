#include <iostream>
#include <vector>

using namespace std;

class Sum
{
private:
    vector<int> s;
public:
    Sum()
    {
        int i;
        while(cin>>i)
        {
            if(i>=0)
            {
                s.push_back(i);
            }
            else
            {
                break;
            }
        }
    }
    void FindSum()
    {
        int sum;
        for(int i:s)
        {
            sum+=i;
        }
        cout<<sum;
    }
};

int main()
{
    Sum inp;
    inp.FindSum();
}

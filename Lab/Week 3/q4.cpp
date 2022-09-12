#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle()
    {
        cin>>radius;
    }

    int CalculatePerimeter()
    {
        return(2*3.14*radius);
    }
    int CalculateArea()
    {
        return(3.14*radius*radius);
    }
};

int main()
{
    Circle c;
    cout<<"Perimeter  is:"<<c.CalculatePerimeter()<<endl;
    cout<<"Area is:"<<c.CalculateArea();
    return 0;
}

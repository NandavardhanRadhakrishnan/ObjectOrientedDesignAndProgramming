#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    int s1, s2, s3;

public:
    Triangle(int a, int b, int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void calculatePerimeter()
    {
        cout << "Perimeter of the triangle is " << s1 + s2 + s3 << endl;
    }
    void calculateArea()
    {
        float s = (s1 + s2 + s3) / 2.0;
        cout << "Area of the triangle is " << sqrt(s * (s - s1) * (s - s2) * (s - s3)) << endl;
    }
};

int main()
{
    Triangle t(3, 4, 5);
    t.calculatePerimeter();
    t.calculateArea();
    return 0;
}
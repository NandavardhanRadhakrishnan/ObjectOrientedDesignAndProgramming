#include <iostream>

using namespace std;

class Room
{
private:
    int length, breadth, height;

public:
    Room()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        cout << "Enter height: ";
        cin >> height;
    }
    void Area()
    {
        cout << "Area: " << length * breadth << endl;
    }
    void Volume()
    {
        cout << "Volume: " << length * breadth * height << endl;
    }
};

int main()
{
    Room r1;
    r1.Area();
    r1.Volume();
    Room r2;
    r2.Area();
    r2.Volume();
    return 0;
}
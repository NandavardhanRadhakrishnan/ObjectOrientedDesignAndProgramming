#include <iostream>

using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }
    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d;
    d.displayDate();
    return 0;
}
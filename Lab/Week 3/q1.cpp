#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll_no;
    public:
        void SetName()
        {
            name = "John";
        }
        void SetRoll()
        {
            roll_no = 2;
        }
};

int main()
{
    Student s;
    s.SetName();
    s.SetRoll();
}

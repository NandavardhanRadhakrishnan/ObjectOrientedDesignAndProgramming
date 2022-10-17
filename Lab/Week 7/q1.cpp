#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;
    string name;
    int marks;
};

class DataInterface : public Student
{
public:
    void setData()
    {
        cout<<"Enter Roll:";
        cin>>roll;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    void getData()
    {
        cout<<roll<<endl<<name<<endl<<marks<<endl;
    }
};

int main()
{
    DataInterface S1;
    S1.setData();
    S1.getData();
}

#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string name;
public:
    Student(string n="Unknown"){
        name = n;
    }
    ~Student(){
        cout<<name<<endl;
    }
};

int main(){
    Student s("abc");
    Student t;
    return 0;
}

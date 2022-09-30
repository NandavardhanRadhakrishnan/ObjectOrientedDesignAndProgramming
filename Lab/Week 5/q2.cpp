#include <iostream>
using namespace std;
class AddAmount{

private:
    int amount = 50;

public:
    AddAmount(){
        return;
    }
    AddAmount(int amt){
        amount += amt;
    }

    void getBalance(){
        cout<<amount<<endl;
    }

};

int main(){
    AddAmount a;
    AddAmount b(200);
    a.getBalance();
    b.getBalance();

    return 0;
}

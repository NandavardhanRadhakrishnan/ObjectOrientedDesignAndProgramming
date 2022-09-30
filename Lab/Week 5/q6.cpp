#include <iostream>
using namespace std;

class s{
public:
    void swap(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void swap(float a, float b){
        float temp;
        temp = a;
        a = b;
        b = temp;
    }
};
#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Enter three numbers \n";

    /* Taking input */
    cin >> a >> b >> c;

    /* If a is smaller than b and c. */

    if (a < b && a < c) {
        cout << "Smallest number is " << a;

      /* If b is smaller than a and c */
    } else if (b < a && b < c)  {
       cout << "Smallest number is " << b;

    } else {
      cout << "Smallest number is "<< c;

     }

      return 0;
}

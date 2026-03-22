// write a program to find a solution of electricity bill by using function in c++ by using deflaut function 

#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }

    cout << "Total Electricity Bill = Rs. " << bill;

    return 0;
}
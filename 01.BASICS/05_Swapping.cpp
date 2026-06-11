// Swap Two Numbers Without Using a Temporary Variable
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers a and b: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0; }
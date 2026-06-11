// Demonstrate Function Overloading
#include <iostream>
using namespace std;

void display(int i) {
    cout << "Displaying integer: " << i << endl;
}

void display(double f) {
    cout << "Displaying float number: " << f << endl;
}

int main() {
    display(5);
    display(7.5);
    return 0;
}
#include <iostream>
using namespace std;

void checkEvenOdd(int *num) {
   if (*num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main() {
    int number = 10;
    checkEvenOdd(&number);

    return 0;
}
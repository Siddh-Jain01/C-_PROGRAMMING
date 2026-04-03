#include <iostream>
using namespace std;
void reverseNumber(int *num) {
    int n = *num;
    int rev = 0;

    while (n != 0) {
        int digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;
    }
     *num = rev; 
}

int main() {
    int number = 1234;
    cout<<"Original Number: "<<number<<endl;
    reverseNumber(&number);
    cout<<"Reversed Number: "<<number<<endl;

    return 0;
}
#include <iostream>
#include <limits> // std::numeric_limits ke liye zaroori hai

using namespace std;

int main() {
    int a;

    while (true) {
        cout << "Enter a Number: ";
        cin >> a;

        // Agar user ne integer ki jagah char ya string daal di
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid integer." << endl << endl;
            
            cin.clear(); // Error flag ko clear karta hai
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Buffer se galat input ko remove karta hai
            
            continue; // Loop ko dobara start karta hai taaki user fir se input de sake
        }

        // Agar input sahi hai toh loop se bahar nikal jao
        break;
    }

    // Ab aapka purana logic smoothly chalega
    if (a > 0) {
        cout << "Positive number" << endl;
    } 
    else if (a < 0) {
        cout << "Negative number" << endl;
    } 
    else {
        cout << "Number is zero" << endl;
    }

    return 0;
}
//Implement a Constructor and Destructor
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called! Object Created." << endl;
    }
    ~Demo() {
        cout << "Destructor Called! Object Destroyed." << endl;
    }
};

int main() {
    Demo obj;
    return 0;
}
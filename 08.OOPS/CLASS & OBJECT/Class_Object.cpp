// Create a Class and Object
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void introduce() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Siddh";
    s1.introduce();
    return 0;
}
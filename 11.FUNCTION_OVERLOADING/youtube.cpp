// //write a program to overload increment operator for subscribe for youtube channel and here ++ operator will be overloaded

#include <iostream>
#include <string>
using namespace std;

class addtion {
public:
    void add(string s1, string s2) {
        cout << "Result = " << s1 + s2 << endl;
    }

    void add(int a, int b) {
        cout << "Result = " << a + b << endl;
    }
};

int main() {
 addtion d;

    d.add("siddh", "deep");
    d.add(4, 5);

    return 0;
}



#include<iostream>
using namespace std;

class demo_funoverloading {
public:
    
    void add(int a, int b) {
        cout << "Integer Sum = " << a + b
        << endl;
    }
    
    void add(double a, double b) {
        cout << "Float Sum = " << a + b
        << endl ;
    }
};

int main() {
    demo_funoverloading gfg;
    
    gfg.add(10, 2);

    gfg.add(5.3, 6.2);

    return 0;
}
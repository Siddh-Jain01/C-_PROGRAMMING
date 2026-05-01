#include <iostream>
#include<string>
using namespace std;

class FB {
private:
    string username;
    int age;

public:
    void getData() {
        cout << "Enter Username: ";
        cin >> username;
        
        cout << "Enter Age: ";
        cin >> age;
    }

    void loginCheck() {
        if (age >= 18) {
            cout << "Login Successfully! Welcome to Facebook, " << username << endl;
        } else {
            cout << "Login Failed! You must be 18+ to use Facebook." << endl;
        }
    }
};

int main() {
    FB user;   // object creation
    
    user.getData();      // taking input
    user.loginCheck();   // checking login condition
    
    return 0;
}
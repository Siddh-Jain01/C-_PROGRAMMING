// #include <iostream>
// #include <string>
// using namespace std;

// class AddString
// {
//     string name = "Shashwat";
//     string lastname = "shandilya";

// public:
//     void show()
//     {
//         string fullname = name + " " + lastname;

//         cout << "Full Name = " << fullname;
//     }
// };

// int main()
// {
//     AddString obj;

//     obj.show();

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

class AddString
{
    string name, lastname;

public:
    void input()
    {
        cout << "Enter First Name: ";
        cin >> name;

        cout << "Enter Last Name: ";
        cin >> lastname;
    }

    void show()
    {
        string fullname = name + " " + lastname;

        cout << "Full Name = " << fullname;
    }
};

int main()
{
    AddString obj;

    obj.input();
    obj.show();

    return 0;
}
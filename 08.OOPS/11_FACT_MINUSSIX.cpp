// #include <iostream>
// using namespace std;

// class Fact
// {
// public:
//     void show()
//     {
//         int n = -6;

//         if (n < 0)
//         {
//             cout << "Factorial of negative number is not possible";
//         }
//     }
// };

// int main()
// {
//     Fact obj;
//     obj.show();

//     return 0;
// }

#include <iostream>
using namespace std;

class Fact
{
    int n;

public:
    void input()
    {
        cout << "Enter number: ";
        cin >> n;
    }

    void show()
    {
        if (n < 0)
        {
            cout << "Factorial of negative number is not possible";
        }
        else
        {
            int fact = 1;

            for (int i = 1; i <= n; i++)
            {
                fact = fact * i;
            }

            cout << "Factorial = " << fact;
        }
    }
};

int main()
{
    Fact obj;

    obj.input();
    obj.show();

    return 0;
}

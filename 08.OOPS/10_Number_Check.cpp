//WAP TO FIND GIVEN NUMBER IS WHOLE NUMBER ,REAL NUMBE4R,PRIME NUMBER,NATURAL NUMBER.
// WAP TO FIND FACTORIAL OF MINUS SIX AND DISPLAY THE REAL OUTPUT.
//WAP TO ADD TWO STRING WHEN ONE STRING IS YOUR NAME AND SECOND STRING IS LAST NAME



#include <iostream>
using namespace std;

class NumberCheck
{
    int num;

public:
    void getNumber()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkNumber()
    {
        if (num >= 0)
            cout << "It is a Whole Number." << endl;
        else
            cout << "It is not a Whole Number." << endl;
       if (num > 0)
            cout << "It is a Natural Number." << endl;
        else
            cout << "It is not a Natural Number." << endl;
        cout << "It is a Real Number." << endl;

        int count = 0;

        if (num > 1)
        {
            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                    count++;
            }

            if (count == 2)
                cout << "It is a Prime Number." << endl;
            else
                cout << "It is not a Prime Number." << endl;
        }
        else
        {
            cout << "It is not a Prime Number." << endl;
        }
    }
};

int main()
{
    NumberCheck obj;

    obj.getNumber();
    obj.checkNumber();

    return 0;
}






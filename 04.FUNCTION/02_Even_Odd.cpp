// WAP TO PERFORM EVEN AND ODD PROGRAM BY USING PARAMATRIZED FUNCTION AND CALL THE FUNCTION USING CALL BY VALUE-
#include<iostream>
using namespace std;

void even(int a)
{
    if(a % 2 == 0)
        cout << a << " : even" << endl;
    else if(a % 2 != 0)
        cout << a << " : odd" << endl;
    else
        cout << "Invalid!... Plz enter valid integer" << endl;
}

void odd(int b)
{
    if(b % 2 != 0)
        cout << b << " : odd" << endl;
    else if(b % 2 == 0)
        cout << b << " : even" << endl;
    else
        cout << "Invalid!... Plz enter valid integer" << endl;
}

int main()
{
    even(4);
    odd(5);
    return 0;
}

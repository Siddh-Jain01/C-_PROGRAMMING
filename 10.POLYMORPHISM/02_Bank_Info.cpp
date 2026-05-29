// // WAP TO PERFORM BANKING SYSTEM BY USING FUNCTION OVERLOADING AND ENSURE FUNCTION OVERLOADING EXCUTES MOST OF THE BANKING OPERATION .
#include <iostream>
using namespace std;

class Bank
{
    int balance = 1000;

public:
    void banking()
    {
        cout << "Balance = " << balance << endl;
    }

    void banking(int deposit)
    {
        balance = balance + deposit;
        cout << "Deposited = " << deposit << endl;
        cout << "New Balance = " << balance << endl;
    }

    void banking(int withdraw, int x)
    {
        balance = balance - withdraw;
        cout << "Withdraw = " << withdraw << endl;
        cout << "Remaining Balance = " << balance << endl;
    }
};

int main()
{
    Bank b;

    b.banking();          
    b.banking(500);       
    b.banking(300,1);    

    return 0;
}
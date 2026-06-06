//WAP TO PERFORM ADDITION OF COMPLEX NUMBER A + IB USING OPERATOR HERE WE OVERLOAD THE OPERATOR + 
#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout <<"real and imaginary: ";
    cin >> c1.real >> c1.imag;

    cout <<"real and imaginary: ";
    cin >> c2.real >> c2.imag;

    c3 = c1 + c2;

    cout << "Sum = "<< c3.real<< " + "<< c3.imag<< "i";

    return 0;
}
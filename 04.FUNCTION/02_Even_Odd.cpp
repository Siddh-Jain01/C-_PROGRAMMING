// WAP TO PERFORM EVEN AND ODD PROGRAM BY USING PARAMATRIZED FUNCTION AND CALL THE FUNCTION USING CALL BY VALUE-
#include<iostream>
using namespace std;

int even(int a)
{
    if(a%2==0)
    cout<<a<<" : even"<<endl;
}
int odd(int b)
{
    if(b%2!=0);
    cout<<b<<" : odd";
}
int main(){
    even(6);
    odd(5);
}

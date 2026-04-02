// WAP TO PERFORM ADDTION BY USING POINTER AND UNDERSTAMND BENEFITS OF THE POINTER 

#include<iostream>
using namespace std;
int main()
{
    int a , b,sum ;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int *p1 = &a;
    int *p2 = &b;
    sum = *p1 + *p2;
    cout<<sum<<endl;
    
}
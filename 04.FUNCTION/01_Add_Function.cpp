#include<iostream>
using namespace std;
 int add(int a, float b);
 int add(int a, float b)
 {
    int c;
    c = a+b;
    cout<<"additon is : "<<c;

 }
 int main(){
    add(6.0,8.0);
    return 0;

 }
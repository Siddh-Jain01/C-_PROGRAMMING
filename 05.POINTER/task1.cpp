#include<iostream>
using namespace std;
int main (){
    int x =10;
    cout<<x<<endl;
    int*y = &x;
    cout<<y<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<*y;

}
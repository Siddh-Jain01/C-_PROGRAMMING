#include<iostream>
using namespace std;
int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    cout<<"enter the value of x and y"<<endl;
    int x,y;
    cin>>x>>y;
    swap(&x,&y);
    cout<<"After swapping: x="<<x<<", y="<<y<<endl;
}
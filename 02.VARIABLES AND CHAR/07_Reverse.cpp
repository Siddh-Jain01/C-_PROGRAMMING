#include<iostream>
using namespace std;
int main(){
    int n;
    int r=0;
    cout<<"enter the number:";
    cin>>n;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    cout<<"the reversed number is = "<<r;
    
    
}
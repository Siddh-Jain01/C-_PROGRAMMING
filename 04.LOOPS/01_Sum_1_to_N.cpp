#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout<<"enter a number :";
    cin>>n;
    int i=0;
    int  sum = 0 ;
    
    while(i<=n){
        sum = sum + i;
        i = i + 1;

    }
    cout<<"sum of all number is :"<<sum<<endl;
    return 0;

}
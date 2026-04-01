#include<iostream>
using namespace std;

void print(int x){
    if(x==0) return; // base case
    print (x-1);//call
    cout<<x<<endl;// work

}
int main (){
    int x;
    cout<<"enter the number: ";
    cin>>x;
    print(x);
}
#include <iostream>
using namespace std;
class calculator //class name

{
    private:
int a;    //
int b;
int c;
public:
int add(int a,int b){
//     cout<<"enter the element a and b ";
//     cin>>a>>b;
    c = a+b; 
    cout<<"addition is "<<c<<endl;
}
int sum(int a,int b){
    // cout<<"enter the element a and b ";
    // cin>>a>>b;
    c = a+b; 
    cout<<"addition is "<<c;
}

};


int main(){
     calculator c;
     c.add(5,8);
     c.sum(2,6);    //object is calculator
    return 0;

}
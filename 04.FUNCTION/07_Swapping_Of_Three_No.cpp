#include<iostream>
using namespace std;
int swapping (int  a , int b , int c)
{ 
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    cout<<"After swapping : "<<a<<" "<<b<<" "<<c;
}
int main(){
    int a , b , c ;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c ;
    swapping(a,b,c);

}  
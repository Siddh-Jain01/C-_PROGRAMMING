#include<iostream>
int main(){
    using namespace std;
    int l,b,a,p;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breath: ";
    cin>>b;
    a = l*b;
    p = 2*(l+b);
    cout<<"area of rectangle is "<<a <<endl;
    cout<<"Perimeter of rectangle is "<<b<<endl;
    if(a>b){
    cout<<"area is greater than perimeter"<<endl;
}
    else
        cout<<"area is less than perimeter";
    

    

}
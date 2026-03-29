#include<iostream>
using namespace std;
int swap(int x, int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl;
    cout<<y;
    


}
int main(){
    swap(5,2);


}
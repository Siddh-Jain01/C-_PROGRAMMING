#include<iostream>
using namespace std;
int main(){
    int sp,cp; 
    cout<<"Enter the selling price :";
    cin>>sp ;
    cout<<"Enter the cost price :";
    cin>>cp ;
    if (sp>cp){
    cout<<"profit= "<<sp-cp;
    }
    if (cp>sp){
    cout<<"loss= "<<cp-sp;
    }
    if(sp==cp){
    cout<<"no loss no profit ";
    }

}
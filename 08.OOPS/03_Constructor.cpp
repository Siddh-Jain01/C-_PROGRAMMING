//Constructor
#include<iostream>
#include<string>
using namespace std;

class bank
{

    public:
    int credit;
    int debit;
    
    
    bank()
    {
        credit = 24899;
        debit = 900;

    }

    void display(){
        cout<<"credit amount is \n"<<credit<<endl;
        cout<<"debit amount is  \n"<<debit;
    }

};
int main(){
    bank b;



    b.display();
    
}
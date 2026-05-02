#include<iostream>
#include<string>
using namespace std;
class car
{   
    public:
    string name;
    int price ;
    int seater;
    string type;
    
};
    void  print(car c){
        cout<<"name"<<"   " <<"price"<<" "<<"seater"<<"   "<<"type"<<endl;
        cout<<c.name<<"  "<<c.price<<"   "<<c.seater<<"    "<<c.type<<endl; 
     }
int main(){
    car c1;
    c1.name = "swift";
    c1.price = 800000;
    c1.seater = 4;
    c1.type = "disel";
    print(c1);


}
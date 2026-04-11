#include<iostream>
using namespace std;
struct part {
    int modelnumber;
    int partnumber;
    float cost;

};
int main(){
    part p1;
    p1.modelnumber = 2345;
    p1.partnumber = 7654;
    p1.cost = 678765;
    cout<<"model: "<<p1.modelnumber<<endl;
    cout<<"part : "<<p1.partnumber<<endl;
    cout<<"cost : "<<p1.cost<<endl;
    return 0;

}
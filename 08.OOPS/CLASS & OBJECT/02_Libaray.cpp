#include<iostream>
#include<string>
using namespace std ;

class library{
    public :
    int totalbooks ;
    int totalseats ;
    string bookname ;
    
};
int main(){
    library l;
    l.totalbooks = 250;
    l.totalseats = 50;
    l.bookname = "Harry potter";
    cout<<l.totalbooks<<endl<<l.totalseats<<endl<<l.bookname<<endl;
}
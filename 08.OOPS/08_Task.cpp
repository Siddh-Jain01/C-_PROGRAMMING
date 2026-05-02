//perform multilevel inheritance  in bankimg system when bank is  a sbi and customer is ramprasad and his account excess sbi bank amd coustomer detail #include<iostream>


#include<iostream>
#include<string>
using namespace std;

 class bank // base class 
 {
    private:
    string name;
    public:
    void sbi(){
        cout<<" SBI"<<endl;

    }
 };

  class account: public bank{        // Derived class 
  public :
  void customer(){
    cout<<"ramprasad is a customer of sbi "<<endl;
  }
  };
  class details: public account{        // Derived class 
  public :
  void read(){
    cout<<"account number 123455789 "<<endl<<"ifsc code 0000000"<<endl;
  }
  };

  int main(){
    details d;
    d.read();
    d.customer();
    return 0;
  };
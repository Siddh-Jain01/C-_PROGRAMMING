#include<iostream>
#include<string>
using namespace std;

 class teacher // base class 
 {
    private:
    string name;
    public:
    void read (){
        cout<<"hr study c++ with oops"<<endl;
    
    }
 };

  class student: public teacher{        // Derived class 
  public :
  void sport(){
    cout<<"he plays cricket and  vollyball "<<endl;
  }
  };
  class exam: public student{        // Derived class 
  public :
  void marks(){
    cout<<"he score 90% in c++ "<<endl;
  }
  };

  int main(){
    student s;
    s.sport();
    return 0;
  };
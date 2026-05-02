//wap to establish relationship among class by using multilevel when class are university , course, faculty,student. create a proper structure to justify the learning of multilevel iheritance. #include<iostream>
#include<iostream>
#include<string>
using namespace std;

 class university // base class 
 {
    private:
    string name;
    public:
    void sage(){
        cout<<" sage university"<<endl;

    }
 };

  class course: public university{        // Derived class 
  public :
  void read(){
    cout<<"BTECH "<<endl<<"BBA"<<endl<<"MBA"<<endl;
  }
  };
  class faculty: public course{        // Derived class 
  public :
  void fac(){
    cout<<"Umesh sir "<<endl<<"Ankit sir"<<endl<<"Prince sir"<<endl;
  }
  };
  class student: public faculty{        // Derived class 
  public :
  void stu(){
    cout<<"Umesh sir "<<endl<<"Ankit sir"<<endl<<"Prince sir"<<endl;
  }
  };

  int main(){
    student s;
    s.read();
    s.fac();
    s.stu();
    return 0;
  };
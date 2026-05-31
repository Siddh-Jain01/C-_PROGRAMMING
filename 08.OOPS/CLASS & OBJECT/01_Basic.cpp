#include<iostream>
#include<string>

using namespace std ;

class student {
    public:
    // ATTRIBUTES
    int id ;
    int age ;
    string name ;
    int nos ;

    // Constructor : deflaut

    student() {
        cout << "Student default contructor called :  "<<endl;
    }
    // paramatrised constructor called
    student (int id , int age , string name ,int nos){
        cout << "student paramatrised constructor called"<< endl ;
        this->id = id  ;
        cout << " id :"<<id<<endl;
        this->age = age ;
        cout << " age :"<<age<<endl;
        this->name = name ;
        cout << " name  :"<<name<<endl;
        this->nos = nos ;
        cout << " nos :"<<nos<<endl;


    }


    //BEHAVIOUR / METHODS / FUNCTION 

    void study(){
        cout << this->name <<"studying "<< endl;
    } 
    void sleep(){
    cout << this->name << "sleeping  "<< endl;

    }
    void bunk(){
        cout << this->name << "bunking" << endl;
    }
    // Deconstructor : deflaut 
    ~student() {
        cout << this->name << "Student default decontructor called :  "<<endl;
    }

};

int main(){
    // student A ;
    // A.id = 1;
    // A.age = 17;
    // A.name = " rahul ";
    // A.nos = 5;

    // A.study();

    // student B ;
    // B.id = 2;
    // B.age = 16;
    // B.name = " raj ";
    // B.nos = 6;

    // B.bunk();
    student A(1,17,"raj",5);
    student B(2,17,"rudra",6);
    student C(3,17,"shivraj",3);
    student D(4,17,"anant",4);

    A.bunk();
    B.sleep();





    return 0;
     
}

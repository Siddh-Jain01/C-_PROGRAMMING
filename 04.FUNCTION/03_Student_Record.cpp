// WAP DEVELOPED STUDENTS MARKSHEET BY TAKING STUDENT RECORD - NAME, CLASS ,SECTION ,ENROLMENT, AND MARKS OF FIVE SUB AFTER THAT DISPLAY THE RESULT BY FINDING THE AVG AND % AT THE END PRINT THE GRADE BY USING PARAMETRIZED FUNCTION AND CALL BY VALUE.

#include <iostream>
using namespace std;
void result(string name, string sclass, string section, string enrolment,
            int m1, int m2, int m3, int m4, int m5)
{
    int total = m1 + m2 + m3 + m4 + m5;
    float avg = total / 5.0;
    float per = (total / 500.0) * 100;

    cout<<"\n--- Marksheet ---\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Class: "<<sclass<<endl;
    cout<<"Section: "<<section<<endl;
    cout<<"Enrolment: "<<enrolment<<endl;

    cout<<"Marks: "<<m1<<","<<m2<<","<<m3<<","<<m4<<","<<m5<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Percentage: "<<per<<"%"<<endl;
    

    if (per >= 90)
        cout<<"Grade: A"<<endl;
    else if (per >= 75)
        cout<<"Grade: B"<<endl;
    else if (per >= 60)
        cout<< "Grade: C"<<endl;
    else if (per >= 50)
        cout<<"Grade: D"<<endl;
    else
        cout<<"Grade: Fail"<<endl;
}

int main()
{
    string name1 ="Siddh", class1 = "10", sec1 = "A", enr1 = "101";
    int s1m1 = 80, s1m2 = 75, s1m3 = 90, s1m4 = 85, s1m5 = 70;

    string name2 ="Sanjeet", class2 ="10", sec2 ="B", enr2 ="102";
    int s2m1 = 60, s2m2 = 65, s2m3 = 70, s2m4 = 55, s2m5 = 50;

    string name3 ="Anuj", class3 ="10", sec3 ="C", enr3 ="103";
    int s3m1 = 95, s3m2 = 92, s3m3 = 88, s3m4 = 90, s3m5 = 94;
   

    result(name2, class1, sec1, enr1, s1m1, s1m2, s1m3, s1m4, s1m5);
    return 0; 
}



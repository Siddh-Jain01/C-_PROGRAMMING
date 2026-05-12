#include <iostream>
using namespace std;

// Base class
class vehical
{
protected:
    int vehicalnumber;
    string modelname;

public:
    void getStudentData()
    {
        cout << "Enter vehicalnumber: ";
        cin >> modelname;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, modelname);
    }

    void displayStudentData()
    {
        cout << "\nRoll Number: " << vehicalnuber << endl;
        cout << "Name: " << modelname << endl;
    }
};

// Derived class
class car : public vehical
{
private:
     string vehicalname
    int milega;
  
public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects:\n";
        cin >> ;
    }

    void calculate()
    {
        int total = sub1 + sub2 + sub3;
        percentage = total / 3.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayResult()
    {
        displayStudentData();

        cout << "Marks: " << sub1 << ", "
             << sub2 << ", "
             << sub3 << endl;

        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Result r;

    r.getStudentData();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}
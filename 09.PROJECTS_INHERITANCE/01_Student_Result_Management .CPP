#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudentData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudentData()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Result : public Student
{
private:
    int sub1, sub2, sub3;
    float percentage;
    char grade;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects:\n";
        cin >> sub1 >> sub2 >> sub3;
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
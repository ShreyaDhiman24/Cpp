/*Demonstrate use of Class and Object in C++:*/

/*a) Define a Class "Student" having following data members and member functions:
 • Data members:
      1. Name of the Student
      2. Roll number
      3. Department Name
 • Member functions:
      1. Enter Student Details
      2. Display Student Details
Write a main program to create the object and test the program for 5 students.*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    /* data */
    string name;
    int roll_number;
    string department;

public:
    void getDetails()
    {
        cout << "\nName of the student: ";
        cin >> name;
        cout << "\nRoll Number: ";
        cin >> roll_number;
        cout << "\nDepartment Name: ";
        cin >> department;
    }

    void displayDetails()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Department Name: " << department << endl;
    }
};

int main()
{
    Student s1, s2, s3, s4, s5;

    // Get Details
    s1.getDetails();
    s2.getDetails();
    s3.getDetails();
    s4.getDetails();
    s5.getDetails();

    // Display Details
    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();
    s4.displayDetails();
    s5.displayDetails();
    return 0;
}
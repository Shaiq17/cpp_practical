#include <bits/stdc++.h>
using namespace std;
// program to display student details in a file.
class student
{

    char name[30], Class[20];

    int roll_no, year;
    float marks;

public:
    student();      // constructor
    void put();     // get student data from user
    void display(); // display data
};

student ::student()
{
    cout << "student details constructor called.." << endl;
}

void student ::put()
{
    cout << "Enter name:: ";
    cin >> name;
    cout << "\nEnter class:: ";
    cin >> Class;
    cout << "\nEnter year:: ";
    cin >> year;
    cout << "\nEnter roll no.:: ";
    cin >> roll_no;
    cout << "\nEnter total marks:: ";
    cin >> marks;
}

void student ::display()
{
    cout << "\nName:: " << name;
    cout << "\nClass:: " << Class;
    cout << "\nYear:: " << year;
    cout << "\nRoll no:: " << roll_no;
    cout << "\nTotal marks:: " << marks;
}

int main()
{
    student s[3];
    fstream file;

    file.open("student.txt", ios ::out); // open file for writing
    cout << "\nWriting student details to the file:: " << endl;
    cout << "\nEnter 3 student details:: " << endl;

    for (int i = 0; i < 3; i++)
    {
        s[i].put();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close(); // close the file

    file.open("student.txt", ios ::in); // open file for reading
    cout << "\nReading student information to the file..." << endl;

    for (int i = 0; i < 3; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].display();
    }
    file.close(); // close the file

    return 0;
}
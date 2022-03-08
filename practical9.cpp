#include<bits/stdc++.h>
using namespace std;

class person
{
    public: 
        string name;
        void get();
        void display();
};

void person :: get()
{
    cout << "Enter the name of the person:: ";
    getline(cin, name);
}

void person :: display()
{
    cout << "\nThe name of the person is:: ";
    cout << name << endl;
}

class student : public person
{
    public:
        char course[20];
        int year, marks;
        void get();
        void display();
};

void student :: get()
{
    cout << "Enter the course of the student:: ";
    cin >> course;
    cout << "\nEnter year:: ";
    cin >> year;
    cout << "\nEnter marks:: ";
    cin >> marks;
}

void student :: display()
{
    cout << "\nThe course of the student is:: ";
    cout << course;
    cout << "\nyear of the student:: ";
    cout << year;
    cout << "\nmarks of the student:: ";
    cout << marks << endl;

}

class employee : public person
{
    public:
        char department[30];
        int salary;
        void get();
        void display();
};

void employee :: get()
{
    cout << "Enter the department of the employee:: ";
    cin >> department;
    cout << "\nEnter the salary of the employee:: ";
    cin >> salary;
}

void employee :: display()
{
    cout << "\nDepartment of the employee:: ";
    cout << department;
    cout << "\nSalary of the employee:: ";
    cout << salary;
}
int main()
{
    person p1;
    student s1;
    employee e1;
    p1.get();
    e1.get();
    e1.display();
    cout << endl;
    s1.get();
    s1.display();
    

    return 0;
}
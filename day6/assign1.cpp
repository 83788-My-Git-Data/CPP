#include <iostream>
using namespace std;
class Date
{

    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void acceptDate()
    {
        // cout<<"Enter day: ";
        cin >> day;
        // cout<<"Enter month: ";
        cin >> month;
        // cout<<"Enter year: ";
        cin >> year;
    }

    void displayDate() const
    {
        // cout<<"Date is: ";
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
public:
    string name;
    string address;
    Date birthDate;

public:
    // call acceptDate inside this fun to accept birthdate
    void acceptData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        birthDate.acceptDate();
    }
    // call displayDate inside this fun to display birthdate
    void displayData()
    {
        cout << "name=" << this->name << endl;
        cout << "address=" << this->address << endl;
        birthDate.displayDate();
    }
};

class Employee : public Person
{
public:
    int empid;
    string dept;
    double salary;
    Date doj;
    // call acceptDate inside this fun to accept joindate
    // call acceptData of person inside this fun to accept person details
    void acceptData()
    {
        cout << "Enter empid: ";
        cin >> empid;
        cout << "Enter dept: ";
        cin >> dept;
        cout << "Enter salary: ";
        cin >> salary;
        doj.acceptDate();
        Person::acceptData();
    }
    // call displayDate inside this fun to display joindate
    // call displayData of person inside this fun to display person details
    void displayData()
    {
        cout << "empid=" << this->empid << endl;
        cout << "dept=" << this->dept << endl;
        cout << "salary=" << this->salary << endl;
        doj.displayDate();

        Person::displayData();
    }
};

int main()
{

    // Person p;
    // p.acceptData();
    // p.displayData();

    // Employee e;
    // e.acceptData();
    // e.displayData();

    // Person *ptr = new Employee;
        Employee *ptr = new Employee;

    ptr->acceptData();
    ptr->displayData();
    delete ptr;
    ptr = NULL;

    return 0;
}
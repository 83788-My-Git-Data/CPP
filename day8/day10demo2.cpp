#include <iostream>
#include <vector>
using namespace std;

class Person
{
private:
    string name;

public:
    Person()
    {
        name = "";
    }
    Person(string name)
    {
        this->name = name;
    }
    virtual void accept()
    {
        cout << "Enter name - ";
        cin >> name;
    }
    virtual void display()
    {
        cout << "Name - " << name << endl; 
    }
};

class Student : public Person
{
private:
    int rollno;
    double percentage;

public:
    Student()
    {
    }
    Student(int rollno, string name, double percentage) : Person(name)
    {
        this->rollno = rollno;
        this->percentage = percentage;
    }
    void accept()
    {
        Person::accept();
        cout << "Enter rollno - ";
        cin >> rollno;
        cout << "Enter percentage - ";
        cin >> percentage;
    }
    void display()
    {
        cout << "Rollno - " << rollno << endl;
        Person::display();
        cout << "Percentage - " << percentage << endl;
    }

    int getRollNo()
    {
        return rollno;
    }
};

class Employee : public Person
{
private:
    int empid;
    double salary;

public:
    Employee()
    {
    }
    Employee(int empid, string name, double salary) : Person(name)
    {
        this->empid = empid;
        this->salary = salary;
    }
    void accept()
    {
        Person::accept();
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter salary - ";
        cin >> salary;
    }
    void display()
    {
        cout << "Empid - " << empid << endl;
        Person::display();
        cout << "Salary - " << salary << endl;
    }
    int getEmpid()
    {
        return empid;
    }
};

int menu()
{
    int choice;
    cout << "1. Add Employee" << endl;
    cout << "2. Add Student" << endl;
    cout << "3. Display All Employee" << endl;
    cout << "4. Display All Students" << endl;
    cout << "5. Find Employee" << endl;
    cout << "6. Find Student" << endl;
    cout << "7. Delete Employee" << endl;
    cout << "8. Delete Student" << endl;
    cout << "0. Exit:" << endl;

    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    vector<Person *> personList;
    Person *ptr;
    int choice, id;

    while ((choice = menu() )!= 0)
    {
        switch (choice)
        {
        case 1:
            ptr = new Employee;
            ptr->accept();
            personList.push_back(ptr);
            break;
        case 2:
            ptr = new Student;
            ptr->accept();
            personList.push_back(ptr);
            break;
        case 3:
            for (int i = 0; i < personList.size(); i++)
            {
                if (typeid(*personList[i]) == typeid(Employee))
                {
                    personList[i]->display();
                }
            }
            break;
        case 4:
            for (int i = 0; i < personList.size(); i++)
            {
                if (typeid(*personList[i]) == typeid(Student))
                {
                    personList[i]->display();
                }
            }
            break;
        case 5:
            int findempid;
            cout << "enter employee id :" << endl;
            cin >> findempid;
            for (int i = 0; i < personList.size(); i++)
            {
                if (typeid(*personList[i]) == typeid(Employee))
                {
                    Employee *findptr = dynamic_cast<Employee *>(personList[i]);
                    if (findempid == findptr->getEmpid())
                    {
                        personList[i]->display();
                        
                    }
                }
            }
            break;

        case 6:
            int findstuid;
            cout << "enter RollNo :" << endl;
            cin >> findstuid;
            for (int i = 0; i < personList.size(); i++)
            {
                if (typeid(*personList[i]) == typeid(Student))
                {
                    Student *findstuidptr = dynamic_cast<Student *>(personList[i]);
                    if (findstuid == findstuidptr->getRollNo())
                    {
                        findstuidptr->display();
                    }
                }
            }

            break;
        case 7:
            cout << "Enter the employee to delete - ";
            cin >> id;

            for (int i = 0; i < personList.size(); i++)
            {
                if (typeid(personList[i]) == typeid(Employee))
                {
                    Employee *empdid = dynamic_cast<Employee *>(personList[i]);
                    if (id == empdid->getEmpid())
                    {
                        personList.erase(personList.begin() + i);
                        delete empdid;
                    }
                }
            }

            break;

        case 8:
            cout << "Enter the employee to delete - ";
            cin >> id;

            for (int i = 0; i < personList.size(); i++)
            {
                if (typeid(personList[i]) == typeid(Student))
                {
                    Student *studdptr = dynamic_cast<Student *>(personList[i]);
                    if (studdptr->getRollNo() == id)
                    {
                        personList.erase(personList.begin() + i);
                        delete studdptr;
                    }
                }
            }
            break;

        case 0:
            cout << "thank you for using this app...!" << endl;

        default:
            cout << "wrong choice...!" << endl;
            break;
        }
    };

    for (int i = 0; i < personList.size(); i++)
        delete personList[i];

    return 0;
}
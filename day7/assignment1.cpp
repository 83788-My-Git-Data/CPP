// Q1. Provide menu driven code for the functionalities:
// 1. Accept Employee
// 2. Display the count of all employees with respect to designation
// 3. Display All Managers
// 4. Display All Salesman
// 5. Display All SalesManagers

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    Employee *eptr[10];
    int choice;
    int index = 0;
    int countManagers = 0;
    int countSalesman = 0;
    int countSalesManager = 0;

    do
    {

        cout << "0. Exit" << endl;
        cout << "1. Accept Employee" << endl;
        cout << "2. Display the count of all employees with respect to designation" << endl;
        cout << "3. Display All Managers" << endl;
        cout << "4. Display All Salesman" << endl;
        cout << "5. Display All SalesManagers" << endl;

        cout << "Enter choice - ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank You.." << endl;
            break;

        case 1:
            if (index < 10)
            {

                int empDesignation;
                do
                {

                    cout << "select employee designation:" << endl;
                    cout << "11.end accept" << endl;
                    cout << "12. Accept Managers" << endl;
                    cout << "13. Accept Salesman" << endl;
                    cout << "14. Accept SalesManager" << endl;

                    cin >> empDesignation;

                    switch (empDesignation)
                    {
                    case 11:
                        cout << "data saved successfully...!";
                        break;
                    case 12:
                    {
                        if (index < 10)
                        {
                            eptr[index] = new Manager();
                            eptr[index]->accept();
                            index++;
                        }
                        else
                        {
                            cout << "array is full" << endl;
                        }
                    }
                    break;

                    case 13:
                        if (index < 10)
                        {
                            eptr[index] = new Salesman();
                            eptr[index]->accept();
                            index++;
                        }
                        else
                        {
                            cout << "array is full" << endl;
                        }

                        break;
                    case 14:
                        if (index < 10)
                        {
                            eptr[index] = new SalesManager();
                            eptr[index]->accept();
                            index++;
                        }
                        else
                        {
                            cout << "array is full" << endl;
                        }

                        break;

                    default:
                        cout << "wrong designation choice ..!" << endl;
                        break;
                    }
                } while (empDesignation != 11);
            }

            else
            {
                cout << "Array is full......" << endl;
            }
            break;

        case 2:

            for (int i = 0; i < index; i++)
            {

                if (typeid(*eptr[i]) == typeid(Manager))
                {
                    countManagers++;
                }
                else if (typeid(*eptr[i]) == typeid(Salesman))
                {
                    countSalesman++;
                }
                else if (typeid(*eptr[i]) == typeid(SalesManager))
                {
                    countSalesManager++;
                }
            }

            cout << "count of Manager:" << countManagers << endl;
            cout << "count of countSalesman:" << countSalesman << endl;
            cout << "count of countSalesManager:" << countSalesManager << endl;

            break;

        case 3:
            cout << "all managers:-" << endl;
            cout << index << endl;
            for (int i = 0; i < index; i++)
            {

                if (typeid(*eptr[i]) == typeid(Manager))
                    eptr[i]->display();
            }
            break;
        case 4:
            cout << "all Salesman:-" << endl;
            for (int i = 0; i < index; i++)
            {

                if (typeid(*eptr[i]) == typeid(Salesman))
                    eptr[i]->display();
            }
            break;
        case 5:
            cout << "all Salesmanager:-" << endl;
            for (int i = 0; i < index; i++)
            {

                if (typeid(*eptr[i]) == typeid(SalesManager))
                    eptr[i]->display();
            }
            break;
        }

    } while (choice != 0);

    return 0;
}

// int main()
// {
//     // Employee *eptr = new Employee();
//     // Employee *eptr = new Manager();
//     // Employee *eptr = new Salesman();
//     Employee *eptr = new SalesManager();
//     eptr->accept(); // Late Binding
//     eptr->display();

//     delete eptr;
//     eptr = NULL;
//     return 0;
// }

// int main1()
// {
//     // Employee obj;
//     // Manager obj;
//     // Salesman obj;
//     SalesManager obj;
//     obj.accept();
//     obj.display();
//     return 0;
// }

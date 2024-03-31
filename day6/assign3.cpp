// Q3. Implement following classes. Test all functionalities in main() of each created class. Note that
// employee is inherited into manager and salesman.

#include <iostream>

using namespace std;

class Employee
{
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Parameterless ctor of Employee " << endl;
    }

    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return this->id;
    }

    void setSalary(double)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return this->salary;
    }

    void accept()
    {
        cout << "Enter Id :";
        cin >> id;

        cout << "Enter salary :";
        cin >> salary;
    }

    void display() const
    {
        cout << "Id :" << id << endl;
        cout << "Salary :" << salary << endl;
    }

    ~Employee()
    {
        cout << "Employee dtor called" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

public:
    Manager()
    {
        cout << "Manager ctor called " << endl;
    }

    Manager(int id, double salary, double bonus)
    {
        this->setId(id);
        this->setSalary(salary);
        this->bonus = bonus;
    }

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return bonus;
    }

    void accept()
    {
        cout << "Enter bonus :";
        cin >> bonus;
    }

    void display()
    {
        cout << "Bonus is :" << bonus << endl;
    }

    void acceptManager()
    {
        Employee::accept();
        this->accept();
    }

    void displayManager()
    {
        Employee::display();
        this->display();
    }

    ~Manager()
    {
        cout << "Manager dtor called  " << endl;
    }
};

class Salesman : virtual public Employee
{
    double commission;

public:
    Salesman()
    {
        cout << "Salesman ctor called " << endl;
    }

    Salesman(int id, double salary, double bonus)
    {
        this->setId(id);
        this->setSalary(salary);
        this->commission = commission;
    }

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    double getCommission() const
    {
        return commission;
    }

    void accept()
    {
        cout << "Enter commission :";
        cin >> commission;
    }

    void display()
    {

        cout << "Commission is :" << commission << endl;
    }

    void acceptSalesman()
    {
        Employee::accept();
        this->accept();
    }

    void displaySalesman()
    {
        Employee::display();
        this->display();
    }

    ~Salesman()
    {
        cout << "Salesman dtor called" << endl;
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "SalesManager ctor called " << endl;
    }

    SalesManager(int id, double salary, double bonus, double commission)
    {
        this->setId(id);
        this->setSalary(salary);
        this->setBonus(bonus);
        this->setCommission(commission);
    }

    void accept()
    {
        Employee::accept();
        Manager::accept();
        Salesman::accept();
    }

    void display()
    {
        Employee::display();
        Manager::display();
        Salesman::display();
    }

    ~SalesManager()
    {
        cout << "SalesManager dtor called " << endl;
    }
};

int main()
{
    // Employee e;
    //  e.accept();
    //  e.display();

    // Manager m ;
    // m.acceptManager();
    // m.displayManager();

    // Salesman s;
    // s.acceptSalesman();
    // s.displaySalesman();

    // SalesManager sm;
    // sm.accept();
    // sm.display();

    // Employee *eptr = new Employee();
    // eptr->accept();
    // eptr->display();

    // delete eptr ;
    // eptr = NULL;

    // Employee *ptr = new Manager();
    // ptr->accept();
    // ptr->display();

    // Employee *em = new Salesman();
    // em->accept();
    // em->display();

    // Employee *sm = new SalesManager();
    // sm->accept();
    // sm->display();

}
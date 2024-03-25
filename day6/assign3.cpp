#include<iostream>>
using namespace std;

class employee
{
private:
    /* data */
    int id;
    double salary;

public:
   employee()
   {
this->id=1;
this->salary=50000;
}

   employee(int id, double salary)
   {
this->id=id;
this->salary=salary;
}

  void setId(int id)
    {
        this->id = this->id;
    }
    double getId()
    {
        return this->id;
    }

void setsalary(int salary)
    {
        this->salary = this->salary;
    }
    double getsalary()
    {
        return this->salary;
    }
~employee()
{


}
};


int main()
{
    
    return 0;
}
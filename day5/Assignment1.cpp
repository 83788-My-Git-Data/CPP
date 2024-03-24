// Q1. Implement following classes. Test all functionalities in main().
// Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
// type date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
// be of type date




#include <iostream> 
using namespace std; 

class Date{

        int day; 
        int month; 
        int year; 

        public: 

        Date(){
            day = 1; 
            month = 1; 
            year = 2000; 
        }

        Date(int day, int month, int year){
            this->day = day; 
            this->month = month; 
            this->year = year; 
        }

        void acceptDate(){
            // cout<<"Enter day: "; 
            cin>>day; 
            // cout<<"Enter month: "; 
            cin>>month; 
            // cout<<"Enter year: "; 
            cin>>year; 
        }

        void displayDate() const{
            // cout<<"Date is: "; 
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }

};

class Person{

    string name; 
    string address; 
    Date birthdate; 

    public: 

    Person(){
        name = " "; 
        address =" ";
        birthdate = Date();  
    }

    void acceptPerson(){
        cout<<"Enter name: "; 
        getline(cin, name); 
        cout<<"Enter address: "; 
        getline(cin, address);  
        cout<<"Enter DOB: ";  
        birthdate.acceptDate(); 
    }

    void displayPerson() const{
        cout<<"Name: "<<name<<endl; 
        cout<<"Address: "<<address<<endl; 
        cout<<"DOB: ";
        birthdate.displayDate(); 
    }


};

class Employee{

    int id; 
    double sal; 
    int deptNumber;
    Date doj;
    Person details;
    public: 

    Employee(){
        id = 0; 
        sal =0.0; 
        deptNumber = 0; 
        doj = Date(); 
        details = Person(); 
    }

    void acceptEmployee(){
        // cout<<"Enter Biodata: "; 
        details.acceptPerson();

        cout<<"Enter id: "; 
        cin>>id; 

        cout<<"Enter sal: "; 
        cin>>sal; 

        cout<<"Enter department Number: "; 
        // getline(cin, dept); 
        cin>>deptNumber; 
        // cout<<endl;

        cout<<"Enter date of joining: "; 
        doj.acceptDate(); 
    }

    void displayEmployee(){
        // cout<<"Biodata: ";
        details.displayPerson();
        cout<<"Emp ID: "<<id<<endl; 
        cout<<"Emp Sal: "<<sal<<endl; 
        cout<<"Emp Dept: "<<deptNumber<<endl; 
        cout<<"Emp Doj: "; 
        doj.displayDate(); 
        cout<<endl; 

    }


};


int main(){

  
    Employee emp; 
    emp.acceptEmployee(); 
    emp.displayEmployee();



    return 0; 
}
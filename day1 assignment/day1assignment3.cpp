// #include<iostream>
#include <iostream>

using namespace std;

class Student
{
    // private:
    
    int rollno;
    string name ;
    int marks;
    public:
    void initStudent()
    {
         rollno=1;
         name ="KRITI";
         marks=100;
    }
    void printStudentOnConsole()
    {
        cout<<"rollno:"<<rollno;
        cout<<"name:"<<name;
        cout<<"marks:"<<marks;

    }
    void acceptStudentFromConsole(){
        cout<<"ENTER ROLL NO:";
        cin>>rollno;
        cout<<"ENTER NAME:";
        cin>>name;
        cout<<"ENTER MARKS:";
        cin>>marks;
    }

};
int main(){
            Student s1;
            int choice;
             s1.initStudent();
   

     do{

        cout<<"0. EXIT ";
        cout<<"1. Accept student detail:" ;
    cout<<"2. Display student detail:";
        cout<<"Enter your choice  - ";
    cin>>choice;
        
        
        switch(choice)
        {
            case 0:
                    cout<<"thanks for using our App!";
                break;
            case 1:
                 s1.acceptStudentFromConsole();
                 break;
            case 2: 
                s1.printStudentOnConsole();
                break;
             
        }
    }while( choice !=0);

    return 0;
}
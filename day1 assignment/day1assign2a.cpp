#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {

    day=15;
    month=04;
    year=2024;
    }
void printDateOnConsole(){
   
    cout << day<<"-"<<month<<"-"<<year;

}
void acceptDateFromConsole(){
     cout << "Enter day - ";
        cin >>day;
        cout << "Enter month - ";
        cin >>month;
        cout << "Enter year - ";
        cin >>year;

}
bool isLeapYear(){
if(year%4==0)
{
    // cout<<"this year is a leap year";
    return true;
}
else
{
        // cout<<"this year is not a leap year";
        return false;
}
}
};

int main(){
    Date d1;
    int choice;
    bool check;
    d1.initDate();
    // d1.acceptDateFromConsole();
    d1.printDateOnConsole();

     do{

        cout<<"0. EXIT ";
        cout<<"1. Accept Date" ;
    cout<<"2. Display Date ";
        cout<<"3. leap year or not:";

        cout<<"Enter your choice  - ";
    cin>>choice;
        
        
        switch(choice)
        {
            case 0:
                cout<<"thanks for using our App!";
                break;
            case 1:
                 d1.acceptDateFromConsole();
                 break;
            case 2: 
                d1.printDateOnConsole();
                break;
                case 3: 
                 check=d1.isLeapYear();
                if(check)
                {
                    cout<<"leap year";
                }
                else
                {
                    cout<<"not a leap year";
                }
                break;

        }
    }while( choice !=0);
    return 0;
}
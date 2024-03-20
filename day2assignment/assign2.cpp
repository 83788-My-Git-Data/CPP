#include <iostream>
using namespace std;
class tollbooth
{
    private:
       int payingCar;
      int nonPayingCar;
        double amount;

    public:
    tollbooth(){
         this->payingCar=0;
        this->nonPayingCar=0;
        this->amount=0;

    }


 void nopayCar(){
     this->nonPayingCar++;
 }
    void payingCaradd(){
         this->payingCar++;
        this->amount=amount+0.50;

    }

    void printOnConsole(){
        cout<<"total no of payingCar="<<this->payingCar<<endl;
         cout<<"total no of payingCar="<<this->nonPayingCar<<endl;
          cout<<"amount of total amount for paying cars="<<this->amount<<endl;
    }
   
};

int main(){
     int choice;
     tollbooth car;
      
          do{

        cout<<"0. EXIT "<<endl<<endl;
        cout<<"1. for add one payingCar: " <<endl<<endl;
    cout<<"2. for add one nonpayingCar"<<endl<<endl;
    cout<<"3. for all total display"<<endl<<endl;
        cout<<"Enter your choice  - "<<endl<<endl;
    cin>>choice;
        
        
        switch(choice)
        {
            case 0:
                cout<<"thanks for using our App!";
                break;
            case 1:
               car.payingCaradd();
                 break;
            case 2: 
                car.nopayCar();
                break;
            case 3: 
               car.printOnConsole();
                break;
               

        }
    }while( choice !=0);


    return 0;
}
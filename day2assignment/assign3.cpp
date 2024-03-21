#include <iostream>
using namespace std;

class Address
{
    private:
    string building;
    string street;
     string city ;
     int pin;
   
    public:
    Address():building("9"), street("kolhapur"), city("pune",7) 
    {
      
    }

 Address(string mybuilding,string mystreet,string mycity ,int mypin){
       this->building=mybuilding;
        this->street=mystreet;
        this->city=mycity;
        this->pin=mypin;
    }



    string getbuilding() const
    {
        cout<<"call  getbuilding : "<<building;
        return building;
    }
    void setbuilding(string b1)
    {
        this->building=b1;
    }
    string getmystreet() const
    {
         cout<<"call getmystreet : "<<street;
        return street;
    }
    void setcity(string city1)
    {
        this->city=city1;
    }
    

    void printOnConsole(){
        cout<<"building="<<this->building<<endl;
         cout<<"mystreet="<<this->street<<endl;
          cout<<"city="<<this->city<<endl;
    }
   
};

int main(){
    //  Address A1('2','kiii','wiii');
    Address b1;
    b1.printOnConsole();

    Address A1("2","kiii","wiii",5);
     A1.printOnConsole();

    A1.getbuilding();
    A1.setbuilding("5");
    A1.getmystreet();
    A1.setcity("mumbai");
    A1.printOnConsole();


return 0;
}
#include <iostream>
using namespace std;
class BoxVolume
{
    private:
    int length;
     int width ;
     int height;
     int volume;
    public:
    BoxVolume():BoxVolume(1,1,1)
    {}

    BoxVolume(int value): BoxVolume(value,value,value)
    {}
    BoxVolume(int l,int w,int h)
    {
        cout<<"inside 3parameterized constructor";
        this->length=l;
        this->width=w;
        this->height=h;
    }
    void printDateOnConsole(){
// this->volume=(this->length)*(this.width)*(this.height);
this->volume = (this->length) * (this->width) * (this->height);
        cout<<"Calculate volume is:"<< this->volume<<endl;

}



};
int main(){
        int choice;
        BoxVolume box1;
          do{

        cout<<"0. EXIT "<<endl;
        cout<<"1. for default value volume Calculate " <<endl;
    cout<<"2. for one value input volume Calculate "<<endl;
    cout<<"3. for all value input volume Calculate "<<endl;
    cout<<"4. for view result volume Calculated: "<<endl;
    cout<<"Enter your choice  - "<<endl;
    cin>>choice;
        
        
        switch(choice)
        {
            case 0:
                cout<<"thanks for using our App!";
                break;
            case 1:
                box1=BoxVolume();
                 box1.printDateOnConsole();
                 break;
            case 2: 

               int val;
                cout<<"enter one value input:";
                cin>>val;
                // BoxVolume box1(val);
                  box1=BoxVolume(val);
                 box1.printDateOnConsole();
                break;
                case 3: 
               int vall,valh,valw;
                cout<<"enter height,weidth,length value input:";
                cin>>valh>>valw>>vall;
                // BoxVolume box1(valh,valw,vall);
                      box1=BoxVolume(valh,valw,vall);
                 box1.printDateOnConsole();
                break;
                case 4:
                   box1.printDateOnConsole();
                   break;

        }
    }while( choice !=0);


            return 0;
}
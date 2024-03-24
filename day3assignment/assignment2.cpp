#include <iostream>
using namespace std;

class Time
{
private:
int hr;
int min;
int sec;

public:
Time():hr(3),min(5),sec(33){}
Time(int h,int m,int s)
{
this->hr=h;
this->min=m;
this->sec=s;
}

int getHour()
{
    return this->hr;

}
int getMinute()
{
    return this->min;
}
int getSeconds()
{
    return this->sec;
}

void printTime()
{
    cout<<"time :"<<this->hr<<":"<<this->min<<":"<<this->sec;
}
void setHour(int hours)
{
this->hr=hours;
}
void setMinute( int minute)
{
this->min=minute;

}
void setSeconds(int second)
{
    this->sec=second;

}
};

int main()
{
    Time *ptr1=new Time();
    Time *ptr2=new Time(2,5,11);
    ptr1->printTime();
    ptr2->printTime();
   
    delete ptr1;
    delete ptr2;
    ptr1=NULL;
    ptr2=NULL;

    return 0;
}


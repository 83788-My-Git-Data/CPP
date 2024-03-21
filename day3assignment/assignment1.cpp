#include <iostream>
using namespace std;

class Cylinder
{
    private:
    float radius; 
    float height;
    float volume;

    static const double PI;
    public:
    Cylinder(): Cylinder(5.4,2.3)
    {

    }
    Cylinder(double radius1, double height1)
    {
        this->radius=radius1;
        this->height=height1;
         this->volume=0;

    }
    float getRadius() const
    {
        cout<<"call getradius : "<<radius;
        return radius;
    }
    void setRadius(double r1)
    {
        this->radius=r1;
    }
    float getHeight() const
    {
         cout<<"call getHeight : "<<height;
        return height;
    }
    void setHeight(double h1)
    {
        this->height=h1;
    }
    float getVolume()const
    {
         cout<<"call getVolume : "<<volume;
        return height;
    }
    void printVolume(){
        this->volume=PI*(this->radius)*(this->radius)*(this->height);
                 cout<<"Volume : "<<this->volume;

    }

};

const double Cylinder::PI=3.14;

int main()
{
    Cylinder c1;
    Cylinder c2(3,5);
    c2.getRadius();
    c2.setRadius(3);
    c2.getHeight();
    c2.setHeight(3);
    c2.getVolume();
    c2.printVolume();

    return 0;
}

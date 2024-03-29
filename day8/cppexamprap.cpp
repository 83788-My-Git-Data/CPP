#include <iostream>
#include <vector>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
    }

   Person( string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    ~Person()
    {
    }

     void accept()
    {
     
        cout << "Enter name  - ";
        cin >> name;
        cout << "Enter age - ";
        cin >> age;
    }
    void display()
    {
        cout << "name - " << name << endl;
   
        cout << "age - " << age << endl;
    }
    string getname()
    {
        return name;
    }
};

class Player:public Person
{
private:
    int id;
    int mobile;

public:
    Player()
    {
    }

     Player(int id, int mobile, string name, int age):Person(name,age)
    {
        this->id=id;
        this->mobile=mobile;
    }

    ~Player()
    {
    }

      void accept()
    {
        Person::accept();
        cout << "Enter id  - ";
        cin >> id;
        cout << "Enter mob.no. - ";
        cin >> mobile;
    }
    void display()
    {
        Person::display();
        cout << "id - " << id << endl;
   
        cout << "mobile - " << mobile << endl;
    }
    int getplayerid()
    {
        return id;
    }
};

class Sports

{
private:
    string Sports_name;
    double fees;

public:
    Sports(/* args */)
    {
    }

    ~Sports()
    {
    }

      void accept()
    {
        
        cout << "Enter Sports_name  - ";
        cin >> Sports_name;
        cout << "Enter fees. - ";
        cin >> fees;
    }
    void display()
    {
        cout << "Sports_name - " << Sports_name << endl;
   
        cout << "fees - " << fees << endl;
    }
    string getplayerid()
    {
        return Sports_name;
    }
};

int main()
{
    vector<Person *>personlist;
    vector<Sports *>sportslist;
    int choice;
    Person *ptr;
    Sports *sptr;
    int choiceplayer;
    int sportchoice;
    int i;

    do
    {
        cout << "1. Add new player:" << endl;
        cout << "2. Add new sport" << endl;
        cout << "3. enroller player into sport: " << endl;
        cout << "4.take player name from user and display her/his sports list:" << endl;
        cout << "5. Display All players and their sports registered:" << endl;
        cout<<"0. Exit:"<<endl;

        cout << "Enter your choice - ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout<<"thankyou for using this app ...!"<<endl;
            break;
        case 1:
            ptr = new Player();
            ptr->accept();
            personlist.push_back(ptr);

            break;

        case 2:
           sptr = new Sports();
           sptr->accept();
           sportslist.push_back(sptr);
            break;
            // s->display();
        case 3:

        cout<<"enroller player into sport: "<<endl;

                cout<<"enter id of player for select sports:"<<endl;
                cin>>choiceplayer;

                do
                {
                   for( i=0 ; i<sportslist.size();i++)
                   {
                    cout<<i+1<< sportslist[i]<<endl;
                   }
                     cout<<i+1<< sportslist[i]<<endl;

                } while (sportchoice!=0);
                   cout<<"enter sports choice:"<<endl;
                cin>>choiceplayer;


           
            

        // for(int i=0;i<sportslist.size();i=+)
        // {
            
        // }
            
            break;
        case 4:
            for (int i = 0; i < index; i++)
                total = total + sptr[i]->getprice();

            cout << "total bill:" << total;

            break;
        default:
            cout << "Wrong choice.." << endl;
            break;
        case 5:

        break;

        
        }

    } while (choice != 0);

    return 0;
}
#include <iostream>
using namespace std;

enum EAccountType
{
    SAVING = 1,
    CURRENT = 2,
    DMAT = 3,
};

class accountexception
{
    // private:
    // string message = "something went wrong...!";
    string message;

public:
    accountexception()
    {
        this->message = "something wrong!";
    }
    accountexception(string message)
    {
        this->message = message;
    }
    void printStackTrace()
    {
        cout << "Acount detail Exception :" << endl;
        cout << "Message :" << message << endl;
    }

    ~accountexception()
    {
    }

};

// class InsufficientFundsException
// {
//     string message;

// public:
//     InsufficientFundsException()
//     {
//         this->message = "something wrong!";
//     }
//     InsufficientFundsException(string message)
//     {
//         this->message = message;
//     }
//     void printStackTrace()
//     {
//         cout << "Acount detail Exception :" << endl;
//         cout << "Message :" << message << endl;
//     }

//     ~InsufficientFundsException()
//     {
//     }
// };




class Account
{

private:
    const int accno;
    EAccountType accountType;
    double balance;
    static int generateAccountno;

public:
    Account(EAccountType accountType, double balance) : accno(++generateAccountno)
    {
        this->accountType = accountType;
        this->balance = balance;
    }

    void display()
    {
        cout << "account no.:" << this->accno << endl;
        cout << "AccountType:" << this->accountType << endl;
        cout << "balance:" << this->balance << endl;
    }

    double getbalance()
    {
        return this->balance;
    }

    void setbalance(double balance)
    {
        this->balance=balance;
    }

    Account() : accno(++generateAccountno)
    {
    }

    ~Account()
    {
    }
};
int Account::generateAccountno = 1000000;

// for accept account detail and exception//
Account *accept()
{
    int choice;
    double balance;
    EAccountType accountchoice;
    // string errormessang;
    cout << "select accounttype:" << endl;
    cout << "1. SAVING:" << endl;
    cout << "2. CURRENT:" << endl;
    cout << "3. DMAT:" << endl;
    cin >> choice;
    // accountchoice = EAccountType(choice);
    accountchoice = (EAccountType)choice;
    if (accountchoice != 1 && accountchoice != 2 && accountchoice != 3)
    {
        throw accountexception("Account-type is Invalid");
    }

    cout << "enter balance:" << endl;
    cin >> balance;
    if (balance < 0)
    {
        throw accountexception("balance is Invalid");
    }
    return new Account(accountchoice, balance);
}
// end accept acount detail///

int main()
{
    Account *arr[5];
    int index = 0;
    double totalbal2;
    double totalbal;
    double userbal;
    int allAcountChoice;
    int personalacountchoice;
    int personaldepositaccount;
    int personalwithdrawaccount;
    
    if (index < 5)
    {
        try
        {
            do
            {
                cout << "1.create account:" << endl;
                cout << "2.display all account details:" << endl;
                cout << "0.Exit:" << endl;

                cin >> allAcountChoice;

                switch (allAcountChoice)
                {
                case 1:
                    arr[index] = accept();
                    arr[index]->display();
                    index++;

                    do{
                        cout << "1.deposit amount:" << endl;
                cout << "2.withdrow amount:" << endl;
                cout << "3.Exit:" << endl;
                cin>>personalacountchoice;

                switch (personalacountchoice)
                {
                case 1:
                    cout<<"enter deposit amount :"<<endl;
                    cin>>personaldepositaccount;
                     userbal=arr[index-1]->getbalance();
                     if(personaldepositaccount<=0)
                     {
                       throw accountexception("invalid amount");

                     }
                     totalbal=userbal+personaldepositaccount;
                    arr[index-1]->setbalance(totalbal);
                    break;
                
                case 2:
                    cout<<"enter withdraw amount :"<<endl;
                    cin>>personalwithdrawaccount;
                     userbal=arr[index-1]->getbalance();
                     if(userbal<personalwithdrawaccount)
                     {
                           throw accountexception("sufficient balance is not available");

                     }
                     totalbal2=userbal-personaldepositaccount;
                    arr[index-1]->setbalance(totalbal2);
                    break;
                case 3:
                    cout<<" thankyou valuable user...!:-)"<<endl;
                    break;
                }


                    }while (personalacountchoice!=3);
                  
                    

                //  break;

                case 2:
                    for(int i=0;i<index;i++)
                    {
                         arr[i]->display();
                    }
                    break;
                case 0:
                    cout<< "thanks for using app...!"<<endl;
                    break;
             
                }

            }while (allAcountChoice !=0);

            //     arr[index] = accept();
            //       index++;
            // arr[index]->display();
          
        }
        catch (accountexception a)
        {
            a.printStackTrace();
        }
    }

    // try
    // {
    //    Account *a=accept();
    //     a->display();
    // return 0;
    // }
    // catch(accountexception a)
    // {
    //     a.printStackTrace();
    // }

    return 0;
}
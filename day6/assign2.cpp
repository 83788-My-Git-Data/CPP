// Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
// holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
// Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
// should be menu driven and should not cause memory leakage.
// Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]

#include <iostream>
using namespace std;

class Product
{

    int id;
    string title;
    double price;

public:
    virtual void accept()
    {
        // partial complete function
        // todo to accept id,title,price;
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    virtual void display()
    {
        // partial complete function
        // todo to accept id,title,price;
        cout << "id=" << this->id << endl;
        cout << "title=" << this->title << endl;
        cout << "price=" << this->price << endl;
    }
    void setprice(double price)
    {
        this->price = this->price;
    }
    double getprice()
    {
        return this->price;
    }
};

class Book : public Product
{
    string author;
    void accept()
    {
        // complete function by accepting author;
        // also reuse the function of Product(Base) class accept
        // give discount of 10% on price and update the price.use mutators and inspector for price
        cout << "Enter author name: ";
        cin >> author;
        Product::accept();
        double prodprice = Product::getprice();
        Product::setprice(prodprice * 0.90);
    }

    virtual void display()
    {
        // complete function by displaying author;
        // also reuse the function of Product(Base) class display
        Product::display();
        cout << "author:" << this->author;
    }
};

class Tape : public Product
{
    string artist;

public:
    void accept()
    {
        // complete function by accepting artist
        // also reuse the function of Product(Base) class accept
        // give discount of 5% on price and update the price.use mutators and inspector for price

        cout << "Enter artist name: ";
        cin >> artist;
        Product::accept();
        double prodprice = Product::getprice();
        Product::setprice(prodprice * 0.95);
    }
    virtual void display()
    {
        // complete function by displaying artist;
        // also reuse the function of Product(Base) class display
        // todo to display artist;

        cout << "Enter artist name: "<<artist;
        Product::display();
    }
};

int main()
{
    // Product *arr[3];
    // write menu driven code.
    // to calculate bill use for loop and call the getPrice to make total of all products

    int choice;
    Product *sptr[3];
    Product *s;
    int index = 0;
    double total = 0;
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. purchase book" << endl;
        cout << "2. purchase tape" << endl;
        cout << "3. show calculate price" << endl;
        cout << "4. Show All total price" << endl;
        cout << "Enter choice - ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank You.." << endl;
            break;
        case 1:
    
            s = new Book();
            // s->accept();
            break;
            // index++;
            // s->display();

        case 2:
            s = new Tape();
            // s->accept();
            break;
            // s->display();

        case 3:
            s->display();
            break;
        case 4:
            for (int i = 0; i < index; i++)
                total = total + sptr[i]->getprice();

            cout << "total bill:" << total;

            break;
        default:
            cout << "Wrong choice.." << endl;
            break;
        }
        if (s != NULL)
        {
            if (index < 3)
            {
                s->accept();
                sptr[index] = s;
                index++;
                s = NULL;
            }
            else
            {
                cout << "Array is full.." << endl;
                delete s;
                s = NULL;
            }
        }
    } while (choice != 0);

    for (int i = 0; i < index; i++)
        delete sptr[i];
    return 0;
    return 0;
}
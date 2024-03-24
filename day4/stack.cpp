#include <iostream>
using namespace std;
/*
Behaviour -> First In Last Out
push(), pop(),peek(), isEmpty(), isFull(), print()
*/

class Stack
{
private:
    int size;
    int top;
    int *ptr;

public:
    Stack(int size = 5)
    {
        this->size = size;
        top = -1;
        ptr = new int[size];
    }

    void push(int element)
    {
        if (!isFull())
        {
            // todo
            top++;
            ptr[top] = element;
            // top++;
        }
        else
            cout << "Stack Overflow" << endl;
    }
    void pop()
    {
        if (!isEmpty())
            top--;
        else
            cout << "Stack underflow" << endl;
    }
    int peek()
    {
        return ptr[top];
    }
    void print()
    {
        // todo
        if (!isEmpty())
        {
            for (int i = 0; i < top + 1; i++)
                cout << "stack element" << i + 1 << ":" << ptr[i] << endl;
        }
        else
        {
            cout << "Stack underflow";
        }
    }
    bool isFull()
    {
        return top == (size - 1);
    }
    bool isEmpty()
    {
        return top == -1;
    }
    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
};

int main()
{
    Stack s;
    int choice;
    
    int getpush;

    do
    {

        cout << "0. EXIT " << endl
             << endl;
        cout << "1. for pop one element " << endl
             << endl;
        cout << "2. 1. for push one element " << endl
             << endl;
        cout << "3. for see peek element" << endl
             << endl;
        cout << "4. for see all element" << endl
             << endl;
             
        cout << "Enter your choice  - " << endl
             << endl;
        cin >> choice;

        switch (choice)
        {

            case 0:
            cout<<"thank you for useing this app! :-)"<<endl;
            break;
            case 1:
                  s.pop();
                                              s.print();
                                              break;
            case 2:
                cout<<"enter element you want to push:";
                cin>>getpush;
                s.push(getpush);
                s.print();
                break;
            case 3:
                cout<<"peek element:"<<s.peek()<<endl;
                break;
            case 4:
            s.print();
            break;



        }

    } while (choice != 0);

        // s.push(1);
        // s.push(2);
        //     s.push(3);
        //             s.push(4);

        //         s.push(5);
        //                     s.print();
        //                                   cout<<s.peek()<<endl;

        //         //   s.pop();
        //                         s.pop();
        //           cout<<s.peek()<<endl;
        //           s.peek();

        //         s.print();

        return 0;
}
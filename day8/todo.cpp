Which programming concept allows a programmer to use an object of one class inside another class?
Question 1 Answer
a.
Composition
b.
Inheritance
c.
Polymorphism
d.
Encapsulation
Question 2
Complete
Mark 1 out of 1
Flag question
Question text
Which of the following statements about virtual functions in C++ is NOT true?
Question 2 Answer
a.
Virtual functions are declared with the virtual keyword in a base class.
b.
Virtual functions can be used with inheritance to achieve runtime polymorphism.
c.
When derived class object is kept in base class pointer and through a base class pointer if virtual function is called then it always execute the base class implementation.
d.
Virtual functions allow derived classes to provide their own versions of a function inherited from the base class.
Question 3
Complete
Mark 0 out of 1
Flag question
Question text
Can a constructor function be constant?
Question 3 Answer
a.
Yes, always
b.
Yes, only if permissions are given
c.
No, because their is no this pointer
d.
No, never
Question 4
Complete
Mark 0 out of 1
Flag question
Question text
Which OOP concept is supported by the use of function overloading and default arguments in C++?
Question 4 Answer
a.
Inheritance
b.
Polymorphism
c.
Encapsulation
d.
Abstraction
Question 5
Complete
Mark 1 out of 1
Flag question
Question text
Which of the following statements about constructors in C++ is NOT true?
Question 5 Answer
a.
A constructor is a special member function of a class that is automatically called whenever an object of the class is created.
b.
A constructor does not have a return type (not even void).
c.
A constructor can take arguments to initialize the data members of the object.
d.
If parameterized constructor is given then there is no need to give parameterless constructor if we create object of class A as follow (A obj = new A());
Question 6
Complete
Mark 0 out of 1
Flag question
Question text
What will be the output of the following C++ code?
#include <iostream>
using namespace std;
class Employee
{
  Employee() { cout << "Constructor called"; }
};
int main()
{
  Employee t1;
  return 0;
}
Question 6 Answer
a.
Runtime Error - Ctor Inaccessible
b.
Constructor called
c.
Compiler Error - Ctor Inaccessible
d.
None of these
Question 7
Complete
Mark 1 out of 1
Flag question
Question text
How do encapsulation and abstraction differ?
Question 7 Answer
a.
Encapsulation is about binding data and methods together, while abstraction is about hiding implementation details.
b.
Encapsulation is about hiding implementation details, while abstraction is about binding data and methods together.
c.
Encapsulation and abstraction are used interchangeably and have no distinct differences.
d.
Encapsulation and abstraction both refer to hiding implementation details
Question 8
Complete
Mark 0 out of 1
Flag question
Question text
What will be the output of the following C++ code?
#include <stdio.h>
int main()
{
   char arr[30];
   int i;
   for (i = 0; i < 9; i++)
     {
        *(arr + i) = 65 + i;
     }
     *(arr + i) = '\0';
     printf("%s", arr);
     return 0;
}
Question 8 Answer
a.
ABCDEFGHI
b.
ABCDEFGHIJ
c.
ABCDEFGH
d.
None of this above
Question 9
Complete
Mark 1 out of 1
Flag question
Question text
How is run-time polymorphism implemented in C++?
Question 9 Answer
a.
Using Templates
b.
Using Virtual functions
c.
Using Inheritance
d.
Using Inheritance and Virtual functions
Question 10
Complete
Mark 1 out of 1
Flag question
Question text
What will be the output of the following C++ code?
#include <iostream>
using namespace std;
namespace Box1
{ int a = 4;}
namespace Box2
{
   int a = 13;
}
int main ()
{
   int a = 16;
   Box1::a;
   Box2::a;
   cout << a;
   return 0;
}
Question 10 Answer
a.
4
b.
13
c.
16
d.
Error


//////////do./////////
virtual
day1 and 2 theory  .. polymorphism...

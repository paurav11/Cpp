#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int p; //Private member of class A
public:
    int x;
    void getdata()
    {
        cout<<"\nEnter x & p: ";
        cin>>x>>p;
    }
    void display()
    {
        cout<<"\nx = "<<x<<"\np = "<<p;
    }
};

class B:private A
{
    int y;
public:
    void setdata()
    {
        cout<<"\nEnter y: ";
        cin>>y;
    }
    void show()
    {
        cout<<"\ny = "<<y<<endl;
    }
    void call_A()
    {
        getdata();
        display();
    }
};

int main()
{
    A a;
    B b;
    a.getdata();
    b.setdata();
    a.display();
    b.show();
    /*b.p=10; -> gives an error as p is a private member of class A which cannot be accessed
    by object of class B.*/
    b.call_A();
    /*In private inheritance, (private or public) members and member functions of class A become
     private members of class B which cannot be accessed by object of class B,so functions of class A
     are called from a public function defined in class B.*/
    _getch();
    return 0;
}


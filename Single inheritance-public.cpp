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

class B:public A
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
    by object of class B & can only be accessed by public member functions of class A.*/
    b.getdata();
    b.display();
    _getch();
    return 0;
}

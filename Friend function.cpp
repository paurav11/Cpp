#include <iostream>
#include <conio.h>
using namespace std;
class B;
class A
{
    int a;
public:
    void getdata()
    {
        cin>>a;
    }
    void display()
    {
        cout<<"\na = "<<a;
    }
    friend void swap(A &,B &);
};

class B
{
    int b;
public:
    void getdata()
    {
        cin>>b;
    }
    void display()
    {
        cout<<"\nb = "<<b<<endl;
    }
    friend void swap(A &,B &);
};

void swap(A &i,B &j)
{
    int temp;
    temp=i.a;
    i.a=j.b;
    j.b=temp;
}
int main()
{
    A x;
    B y;
    cout<<"Enter value of a: ";
    x.getdata();
    cout<<"Enter value of b: ";
    y.getdata();
    cout<<"\nValues before swapping: ";
    x.display();
    y.display();
    swap(x,y);
    cout<<"\nValues after swapping: ";
    x.display();
    y.display();
    _getch();
    return 0;
}

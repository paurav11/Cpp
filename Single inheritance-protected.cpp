#include <iostream>
#include <conio.h>
using namespace std;
class A
{
protected:
    int p; //Protected member of class A
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

class B:protected A
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
    void givedata()/*Protected member can be accessed only public function of derived class.*/
    {
        cout<<"\nEnter p: ";
        cin>>p;
        cout<<"\np = "<<p;
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
    b.givedata();
    _getch();
    return 0;
}


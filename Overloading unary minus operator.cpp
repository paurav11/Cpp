#include <iostream>
#include <conio.h>
using namespace std;
class neg
{
    int a,b,c;
public:
    neg(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;
    }
    void operator-();
};

void neg::operator-()
{
    a=-a;
    b=-b;
    c=-c;
}
int main()
{
    neg m(10,-20,30);
    m.display();
    -m;
    cout<<"\n";
    m.display();
    _getch();
    return 0;
}

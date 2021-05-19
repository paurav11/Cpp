#include <iostream>
#include <conio.h>
using namespace std;

class integer
{
    int m,n;
public:
    integer()
    {
        m=0;
        n=0;
    }
    integer(int x,int y)
    {
        m=x;
        n=y;
    }
    void display()
    {
        cout<<"m = "<<m<<"\nn = "<<n<<endl;
    }
};

int main()
{
    integer i,j(10,20);
    i.display();
    cout<<endl;
    j.display();
    _getch()    ;
    return 0;
}

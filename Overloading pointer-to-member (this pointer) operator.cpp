#include <iostream>
#include <conio.h>
using namespace std;
class test
{
public:
    int num;
    test(int j)
    {
        num=j;
    }
    test* operator->(void)
    {
        return this;
    }
};

int main()
{
    test T(5);
    test *ptr=&T;
    cout<<"T.num = "<<T.num;
    cout<<"\nptr->num = "<<ptr->num;
    cout<<"\nT->num = "<<T->num;
    _getch();
    return 0;
}

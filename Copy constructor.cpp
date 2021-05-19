#include <iostream>
#include <conio.h>
using namespace std;

class test
{
    int a;
public:
    test(){};
    test(int n)
    {
        a=n;
    }
    test(test &x)
    {
        a=x.a;
    }
    void display()
    {
        cout<<a;
    }
};

int main()
{
    test A(100);
    test B(A);
    test C = A;
    test D;
    D = A;
    cout<<"A = ";
    A.display();
    cout<<"\nB = ";
    B.display();
    cout<<"\nC = ";
    C.display();
    cout<<"\nD = ";
    D.display();
    _getch();
    return 0;
}

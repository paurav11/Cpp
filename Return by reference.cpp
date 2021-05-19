#include <iostream>
#include <conio.h>
using namespace std;
int& larger(int &x,int &y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a,b;
    a=10;
    b=15;
    cout<<"a = "<<a<<", &a = "<<&a<<"\nb = "<<b<<", &b = "<<&b<<endl;
    int& c=larger(a,b);
    cout<<c<<" is larger."<<endl;
    cout<<"&c = "<<&c;
    _getch()    ;
    return 0;
}


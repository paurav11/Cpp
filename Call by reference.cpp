#include <iostream>
#include <conio.h>
using namespace std;
int swap(int &,int &);
int main()
{
    int a,b;
    a=10;
    b=15;
    cout<<"Values before swapping: "<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    swap(a,b);
    cout<<"\nValues after swapping: "<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    _getch();
    return 0;
}

int swap(int &x,int &y) //Call by reference
{
    int t=x; //Dynamic initialization (Possible in C++ not in C)
    x=y;
    y=t;
}

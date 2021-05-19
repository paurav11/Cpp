#include <iostream>
#include <conio.h>
using namespace std;
class operate
{
    int x;
public:
    operate(){};
    operate(int a)
    {
        x=a;
    }
    int operator<(operate);
    int operator>(operate);
    int operator==(operate);
};

int operate::operator<(operate B)
{
   if(x<B.x)
   {
       cout<<x<<" is smaller than "<<B.x<<".";
       return 1;
   }
   else
   {
       return 0;
   }
}

int operate::operator>(operate B)
{
   if(x>B.x)
   {
       cout<<x<<" is larger than "<<B.x<<".";
       return 1;
   }
   else
   {
       return 0;
   }
}

int operate::operator==(operate B)
{
   if(x==B.x)
   {
       cout<<x<<" is equal to "<<B.x<<".";
       return 1;
   }
   else
   {
       return 0;
   }
}

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<endl;
    operate A(a);
    operate B(b);
    if(A<B)
    {
       cout<<"\n< is overloaded.";
    }

    if(A>B)
    {
       cout<<"\n> is overloaded.";
    }

    if(A==B)
    {
       cout<<"\n== is overloaded.";
    }
    _getch();
    return 0;
}

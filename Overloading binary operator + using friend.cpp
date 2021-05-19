#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
   float x,y;
public:
   complex(){};
   complex(float real,float imag)
   {
       x=real;
       y=imag;
   }
   void display()
   {
       cout<<x<<" + i("<<y<<")"<<endl;
   }
   friend complex operator+(complex,complex);
};

complex operator+(complex A,complex B)
{
   return complex((A.x+B.x),(A.y+B.y));
}

int main()
{
    complex A(2.5,4.8);
    complex B(3.7,4.4);
    complex C;
    cout<<"A = ";
    A.display();
    cout<<"B = ";
    B.display();
    C=A+B;
    cout<<"Sum = ";
    C.display();
    _getch();
    return 0;
}



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
   complex operator+(complex);
};

complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
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


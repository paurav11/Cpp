#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
   float x,y;
public:
   complex()
   {
       x=0;y=0;
   }
   complex(float real,float imag)
   {
       x=real;
       y=imag;
   }
   void display()
   {
       cout<<x<<" + i("<<y<<")"<<endl;
   }
   friend void sum(complex,complex);
};

void sum(complex A,complex B)
{
    float m_sum,n_sum;
    m_sum=A.x+B.x;
    n_sum=A.y+B.y;
    cout<<"Sum = "<<m_sum<<" + i("<<n_sum<<")";
}

int main()
{
    complex X;
    complex A(2.5,4.8);
    complex B(3.7,4.4);
    X.display();
    cout<<endl;
    cout<<"A = ";
    A.display();
    cout<<"B = ";
    B.display();
    sum(A,B);
    _getch();
    return 0;
}

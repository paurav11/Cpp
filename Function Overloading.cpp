#include <iostream>
#include <conio.h>
using namespace std;
double power(double,int);
int power(int,int);
int i;
int main()
{
    double m,p;
    int n;
    cout<<"Enter m & n: ";
    cin>>m>>n;
    p=power(m,n);
    cout<<m<<" to the power "<<n<<" = "<<p;
    _getch();
    return 0;
}

double power(double x,int y)
{
   double pow=1;
   for(i=0;i<y;i++)
   {
       pow=pow*x;
   }
   return pow;
}

int power(int x,int y)
{
   int pow=1;
   for(i=0;i<y;i++)
   {
       pow=pow*x;
   }
   return pow;
}

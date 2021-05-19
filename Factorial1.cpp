#include <iostream>
using namespace std;
int main()
{
  int i,x,m,fact=1;
  cout<<"Enter a number: ";
  cin>>x;
  m=x;
  for(i=0;i<x;i++)
  {
    fact=fact*m;
    m=m-1;
  }
  cout<<"Factorial of "<<x<<" = "<<fact;
  return 0;
}

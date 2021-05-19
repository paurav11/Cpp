#include <iostream>
using namespace std;
int fact(int n)
{
  if(n==1)
     return n;
  else
     return n*fact(n-1);
}

int main()
{
  int x;
  cout<<"Enter a number: ";
  cin>>x;
  cout<<"Factorial of "<<x<<" = "<<fact(x);
  return 0;
}

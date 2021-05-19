#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int *p,i,n;
    cout<<"Enter the size of elements: ";
    cin>>n;
    p=new int[n];
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }

    for(i=0;i<n;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;;
    }
    return 0;
}

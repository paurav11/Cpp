#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int *a,i,n,x,flag=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    a=new int[n];
    cout<<"\nEnter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the element to be searched: ";
    cin>>x;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<x<<" is present in the array at position "<<i+1<<"."<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<x<<" is not present in the array."<<endl;
    }
    getch();
    return 0;
}

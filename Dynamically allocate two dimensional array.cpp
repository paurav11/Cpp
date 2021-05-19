#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int *p,**a,i,j,n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    cout<<endl;
    p=new int[n];
    a=new int*[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter no. of elements in row "<<i+1<<": ";
        cin>>p[i];
        cout<<endl;
        a[i]=new int[p[i]];
    }
    cout<<"\nEnter the elements: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<p[i];j++)
        {
            cin>>*(a[i]+j);
        }
    }
    cout<<"\n2D Array: \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<p[i];j++)
        {
            cout<<*(a[i]+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

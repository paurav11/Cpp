#include <iostream>
#include <conio.h>
using namespace std;
void binary(int [],int,int);
int main()
{
    int *a,i,j,n,x,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    a=new int[n];
    int m=n/2;
    int count=0;
    cout<<"\nEnter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"\nSorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n\nEnter the element to be searched: ";
    cin>>x;
    cout<<endl;
    binary(a,n,x);
    getch();
    return 0;
}

void binary(int a[],int n,int x)
{
    int m=n/2;
    int count=0;
    while(a[m]!=x && count<=m)
    {
        if(x>a[m])
        {
            m=(m+n)/2;
        }
        else
        {
            m=m/2;
        }
        count++;
    }
    if(a[m]==x)
    {
        cout<<x<<" is present in the array at position "<<m+1<<"."<<endl;
    }
    else
    {
        cout<<x<<" is not present in the array."<<endl;
    }
}

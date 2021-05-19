#include <iostream>
using namespace std;
void binary(int [],int,int);
void quicksort(int [],int,int);
int partition(int [],int,int);
int *a,i,j,p,q,r,n,x,temp;
int main()
{
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
    p=0;
    r=n-1;
    quicksort(a,p,r);
    cout<<"\nSorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n\nEnter the element to be searched: ";
    cin>>x;
    cout<<endl;
    binary(a,n,x);
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

int partition(int a[],int p,int r)
{
    int x,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}

void quicksort(int a[],int p,int r)
{
    if(p<r)
    {
        q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}


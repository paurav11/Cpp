#include <iostream>
using namespace std;
void binary(int [],int,int);
void merge(int [],int,int,int);
void mergesort(int [],int,int);
int i,j,k,n,x,temp;
int main()
{
    int *a,l,r;
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
    l=0;
    r=n-1;
    mergesort(a,l,r);
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

void merge(int a[],int l,int mid,int r)
{
    int i=l,j=mid+1,index=l,temp[100];
    while((i<=mid) && (j<=r))
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i++;
        }
        else
        {
            temp[index]=a[j];
            j++;
        }
        index++;
    }

    if(i>mid)
    {
        while(j<=r)
        {
            temp[index]=a[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=a[i];
            i++;
            index++;
        }
    }

    for(k=l;k<index;k++)
    {
        a[k]=temp[k];
    }
}

void mergesort(int a[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

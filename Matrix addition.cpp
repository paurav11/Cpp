#include <iostream>
#include <conio.h>
using namespace std;
int a[10][10],b[10][10],c[10][10],row,col,r1,c1,r2,c2,i,j;
int main()
{
    cout<<"Enter no. of rows & columns of Matrix 1:";
    cin>>r1>>c1;
    cout<<"Enter no. of rows & columns of Matrix 2:";
    cin>>r2>>c2;

    if(r1==r2 && c1==c2)
    {
       row=r1=r2;
       col=c1=c2;
       cout<<"Order of Matrix 1 = Matrix 2,therefore matrix addition is possible.\n"<<endl;
    }
    else
    {
        cout<<"Matrix addition is not possible."<<endl;
        goto last;
    }

    cout<<"Enter values in Matrix 1:"<<endl;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout<<"Enter values in Matrix 2:"<<endl;

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<=row;i++)
    {
       for(j=0;j<=col;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
       }
    }

    cout<<"Resultant matrix:"<<endl;

    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
         cout<<c[i][j]<<"\t";
       }
         cout<<endl;
    }
    last:
    getch();
    return 0;
}

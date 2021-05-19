#include <iostream>
#include <conio.h>
using namespace std;
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
int main()
{
    cout<<"Enter no. of rows & columns of Matrix 1:";
    cin>>r1>>c1;
    cout<<"Enter no. of rows & columns of Matrix 2:";
    cin>>r2>>c2;

    if(c1==r2)
    {
       cout<<"Matrix multiplication is possible.\n"<<endl;
    }
    else
    {
        cout<<"Matrix multiplication is not possible."<<endl;
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

    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
       {
           c[i][j]=0;
           for(k=0;k<r2;k++)
           {
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
           }
       }
    }

    cout<<"Resultant Matrix:"<<endl;

    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
       {
         cout<<c[i][j]<<"\t";
       }
         cout<<endl;
    }
    last:
    getch();
    return 0;
}

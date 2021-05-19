#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[50][50],i,j,n;
    cout<<"Insert the number of rows(columns): ";
    cin>>n;
    cout<<"Insert the elements of matrix: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix: \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

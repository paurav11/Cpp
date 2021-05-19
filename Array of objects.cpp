#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class student
{
    char name[100];
    int id,age;
public:
    void getdata()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter age: ";
        cin>>age;
    }
    void display()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    int i,n;
    cout<<"Enter no. of students: ";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].getdata();
    }
    cout<<"\nStudent Details\n";
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    _getch();
    return 0;
}

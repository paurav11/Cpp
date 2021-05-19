#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class str
{
   char *name;
   int length;
public:
    str()
    {
        length=0;
        name=new char[length+1];
        strcpy(name,"\0");
    }
    str(char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void concat(str &,str &);
    void display()
    {
        cout<<"String: "<<name<<endl;
    }
};
void str::concat(str &a,str &b)
{
    length = a.length + b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
    cout<<"String: "<<name;
}

int main()
{
    str s1,s2("Well Done!"),s3("Paurav."),s4;
    s1.display();
    s2.display();
    s3.display();
    s4.concat(s2,s3);
    _getch();
    return 0;
}

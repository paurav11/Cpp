#include <iostream>
#include <conio.h>
using namespace std;

class time
{
    int hours,minutes;
public:
    void setdata(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void display()
    {
        cout<<hours<<" hours & "<<minutes<<" minutes"<<endl;
    }
    void sum(time,time);
};

void time::sum(time t1,time t2)
{
    int t_hours,t_minutes;
    t_minutes=minutes+t2.minutes;
    t_hours=hours+t2.hours+(t_minutes/60);
    t_minutes=t_minutes%60;
    cout<<"Sum = "<<t_hours<<" hours & "<<t_minutes<<" minutes";
}

int main()
{
    time t1,t2;
    t1.setdata(2,30);
    t2.setdata(1,50);
    t1.display();
    t2.display();
    t1.sum(t1,t2);
    _getch();
    return 0;
}

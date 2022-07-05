#include<iostream.h>
#include<conio.h>

class time
{
int hour, minute;
public:
void get(int h, int m)
{
hour=h;
minute=m;
}
void put(void)
{
cout<<hour<<"hour and";
cout<<minute<<"minute"<<endl;
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
minute=t1.minute+t2.minute;
hour=minute/60;
minute=minute%60;
hour=hour+t1.hour+t2.hour;
}
int main()
{
clrscr();
time t1,t2,t3;
t1.get(1,25);
t2.get(2,15);
t3.sum(t1,t2);
cout<<"t1=";
t1.put();
cout<<"t2=";
t2.put();
cout<<"t3=";
t3.put();
getch();
return 0;
}

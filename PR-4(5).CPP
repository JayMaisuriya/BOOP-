#include<iostream.h>
#include<conio.h>

void display(int x, double y)
{
cout<<"Integer number:"<<x<<endl;
cout<<"Double number:"<<y<<endl;
}

void display(double j)
{
cout<<"Double number:"<<j<<endl;
}

void display(int h)
{
cout<<"Integer number:"<<h<<endl;
}

int main()
{
int a=22;
double b=6.2;
clrscr();
display(a);
display(b);
display(a,b);
getch();
return 0;
}
#include<iostream.h>
#include<conio.h>

inline int cube(int x)
{
return(x*x*x);
}
int main()
{
clrscr();
cout<<"The cube of 3 is:"<<cube(3)<<endl;
getch();
return 0;
}
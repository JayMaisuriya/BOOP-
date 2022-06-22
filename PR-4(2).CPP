#include<iostream.h>
#include<conio.h>

int sum(int a, int b, int c=0, int d=0)
{
 return(a+b+c+d);
}


int main()
{
clrscr();
cout<<sum(26,11)<<endl;
cout<<sum(26,11,52)<<endl;
cout<<sum(26,11,52,13)<<endl;
getch();
return 0;
}
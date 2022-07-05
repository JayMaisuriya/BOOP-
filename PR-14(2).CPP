#include<iostream.h>
#include<conio.h>

class jay
{
  public:
	 float area;
	 jay()
	 {
	   area=0;
	 }
	 jay(int a, int b)
	 {
	   area=a*b;
	 }
	 void disp()
	 {
	  cout<<area<<endl;
	 }
};

int main()
{
 clrscr();
 jay O1;
 jay O2(26,11);
 O1.disp();
 O2.disp();
 getch();
 return 0;
}
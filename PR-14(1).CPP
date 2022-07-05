#include<iostream.h>
#include<conio.h>

class jay
{
 public:
	void func(int x)
	{
	  cout<<"value of x="<<x<<endl;
	}

	void func(double x)
	{
	 cout<<"value of x="<<x<<endl;
	}

	void func(int x, int y)
	{
	 cout<<"value of x and y="<<x<<","<<y<<endl;
	}

};

int main()

{
	clrscr();
	jay j;
	j.func(11);
	j.func(52.13);
	j.func(26,11);
	getch();
	return 0;
}
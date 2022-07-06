#include<iostream.h>
#include<conio.h>
class baap
{
public:
	int p;
	void disp()
	{
	cout<<"from base class:"<<p<<endl;
	}
};

class beta:public baap
{
public:
	int j;
	void disp()
	{
	cout<<"from derived class:"<<j<<endl;
	cout<<"from base class:"<<p<<endl;
	}
};
 int main()
{
clrscr();
baap P;
beta J;

P.p=52;
J.j=13;
J.p=26;
P.disp();
J.disp();

getch();
return 0;
}
#include<iostream.h>
#include<conio.h>

class BASE
{
 public:
	BASE()
	{
	  cout<<"---IAM BASE CLASS---"<<endl;
	}
};

class DERIVED:public BASE
{
 public:
	DERIVED()
	{
	  cout<<"---IAM DERIVED CLASS---"<<endl;
	}
};
int main()
{
 clrscr();
 DERIVED j;
 getch();
 return 0;
}


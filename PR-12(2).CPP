#include<iostream.h>
#include<conio.h>

class BASE1
{
 public:
	BASE1()
	{
	  cout<<"---IAM BASE1 CLASS---"<<endl;
	}
};

class BASE2
{
 public:
	BASE2()
	{
	  cout<<"---IAM BASE2 CLASS---"<<endl;
	}
};

class DERIVED:public BASE1,public BASE2
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


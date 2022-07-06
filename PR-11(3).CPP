#include<iostream.h>
#include<conio.h>

class BASE1
{
 public:
	int x;
	void disp_b1()
	{
	 cout<<"FROM BASE1:"<<x<<endl;
	}
};

class BASE2
{
 public:
	int y;
	void disp_b2()
	{
	 cout<<"FROM BASE2:"<<y<<endl;
	}
};

class DERIVED:public BASE1, public BASE2
{
  public:
	 int z;
	 void disp_d()
	 {
	  cout<<"FROM DERIVED:"<<z<<endl;
	  cout<<"FROM BASE1:"<<x<<endl;
	  cout<<"FROM BASE2:"<<y<<endl;
	 }
};

int main()
{
clrscr();
cout<<"---BASE1-----"<<endl;
BASE1 DAD;
DAD.x=1000;
DAD.disp_b1();
cout<<""<<endl;
cout<<"---BASE2-----"<<endl;
BASE2 MOM;
MOM.y=100;
MOM.disp_b2();
cout<<""<<endl;
cout<<"---DERIVED---"<<endl;
DERIVED SON;
SON.z=10;
SON.x=2000;
SON.y=200;
SON.disp_d();
SON.disp_b1();
SON.disp_b2();
getch();
return 0;
}
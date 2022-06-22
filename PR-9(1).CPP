#include<iostream.h>
#include<conio.h>

class B;
class A
{
   int x;

public:
	void setdata(int i)
	{
	  x=i;
	}
	friend void min(A,B);
};
class B
{
   int y;

public:
	void setdata(int i)
	{
	  y=i;
	}
	friend void min(A,B);
};

void min(A a, B b)
{
if(a.x<=b.y)
cout<<a.x<<endl;
else
cout<<b.y<<endl;
}

int main()
{
clrscr();
A a;
B b;
int p,q;
cout<<"enter p:";
cin>>p;
a.setdata(p);
cout<<"enter q:";
cin>>q;
b.setdata(q);
min(a,b);
getch();
return 0;
}

#include<iostream.h>
#include<conio.h>

class jay
{
 public:
	int x;

	jay retobj(int x)
	{
	  this->x=x;
	  return *this;
	}

	void display()
	{
	  cout<<x;
	}
};

int main()
{
 clrscr();
 jay J;
 jay H=J.retobj(11);
 H.display();
 getch();
 return 0;
}
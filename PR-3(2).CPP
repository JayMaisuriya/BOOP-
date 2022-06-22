#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class test
{
  public:
	static int x;
	void show()
	{
	cout<<x<<endl;
	}
};
int test::x=125;
int main()
{
clrscr();
test t;
float pi=3.148454654;
t.show();
cout<<setw(15)<<"HELLO WORLD"<<endl;
cout<<setw(15)<<setfill('*')<<"GOOD"<<endl;
cout<<setprecision(5)<<pi<<endl;
getch();
return 0;
}
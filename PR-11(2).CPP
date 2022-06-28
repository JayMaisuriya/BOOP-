#include<iostream.h>
#include<conio.h>

class Grandfather
{
  public:
	  int n;
	  void disp_G()
	  {
	    cout<<"from base class:"<<n<<endl;
	  }
};

class Father:public Grandfather
{
  public:
	  int p;
	  void disp_P()
	  {
	    cout<<"from derived1 class:"<<p<<endl;
	  }
};

class Son:public Father
{
  public:
	  int j;
	  void disp_J()
	  {
	   cout<<"from derived2 class:"<<j<<endl;
	  }
};

int main()
{
 clrscr();
 cout<<"---BASE CLASS---"<<endl;
 Grandfather D;
 D.n=1000;
 D.disp_G();

 cout<<"---DERIVED1 CLASS---"<<endl;
 Father A;
 A.p=100;
 A.disp_P();
 A.n=2000;
 A.disp_G();

 cout<<"---DERIVED2 CLASS---"<<endl;
 Son H;
 H.j=10;
 H.disp_J();
 H.p=200;
 H.disp_P();
 H.n=3000;
 H.disp_G();

 getch();
 return 0;
}
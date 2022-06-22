#include<iostream.h>
#include<conio.h>
class Myclass
{
friend class yourclass;
   public:
	   Myclass()
	   {
	    y=0;
	   }
	   void disp()
	   {
	    cout<<y<<endl;
	   }
   private:
	   int y;
};
class yourclass
{
  public:
	  void show(Myclass & jay.int a)
	  {
	    jay.y=a;
	  }
};
void main()
{
Myclass x;
yourclass z;
x.disp();
z.show(x,6);
x.disp();
getch();
}
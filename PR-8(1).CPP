#include<iostream.h>
#include<conio.h>

class A
{
       private:
		int x,y;
       public:
		void get()
		{
		cout<<"ENTER X:";
		cin>>x;
		cout<<"ENTER Y:";
		cin>>y;
		}
		int max(A j)
		{
		   if(j.x<j.y)
		   {
		     cout<<x<<"IS MINIMUM NUMBER"<<endl;
		   }
		   else
		   {
		     cout<<y<<"IS MINIMUM NUMBER"<<endl;
		   }
		   return (x,y);
		 }
};

int main()
{
clrscr();
A j;
j.get();
j.max(j);
getch();
return 0;
}

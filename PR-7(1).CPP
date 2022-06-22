#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=4;
class student
{
public:
int r_no;
char name[20];
int age;
char br[20];

void getdata()
{
cout<<"Enter Roll no:";
cin>>r_no;
cout<<"Enter Name:";
cin>>name;
cout<<"Enter Age:";
cin>>age;
cout<<"Enter Branch:";
cin>>br;
}
void display()
{
cout<<"Roll no="<<r_no<<endl;
cout<<"Name="<<name<<endl;
cout<<"Age="<<age<<endl;
cout<<"Branch="<<br<<endl;
}
};
int main()
{
int i, n=2;
student s[10];
clrscr();
	cout<<"---Enter student data---"<<endl;
for(i=0; i<n; i++)
{
  s[i].getdata();
}
cout<<"---Display student data---"<<endl;
for(i=0; i<n; i++)
{
  s[i].display();
}
getch();
return 0;
}

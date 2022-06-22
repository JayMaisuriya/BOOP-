#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=4;
class student
{
public:
student()
{
  c++;
}
int r_no;
char name[20];
int age;
char br[20];
static int c;
void static count()
{
cout<<"Total instanes are:"<<c<<endl;
}
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
int student::c=0;
int main()
{
int c;
char yn;
clrscr();
do
{
cout<<"PRESS 1 FOR CREATING A NEW OBJECT."<<endl;
cout<<"PRESS 2 FOR TO DISPLAY NO OF OBJECT.																																																																																																																						"<<endl;
cout<<"Enter your choice";
cin>>c;
switch(c)
{
case 1:
student s;
cout<<"Enter student data"<<endl;
s.getdata();
cout<<"Display student data"<<endl;
s.display();
break;
case 2:
student::count();
break;
}
cout<<"Do you wish to continue?";
cin>>yn;
}
while(yn =='y' || yn =='y');
getch();
return 0;
}

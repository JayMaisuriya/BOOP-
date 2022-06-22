#include<iostream.h>
#include<conio.h>

struct student
{
int r_no;
char name[20];
int age;
char br[20];
};
int main()
{
student s;
clrscr();
cout<<"---GET DETAILS---"<<endl;
cout<<"Enter Roll no:";
cin>>s.r_no;
cout<<"Enter Name:";
cin>>s.name;
cout<<"Enter Age:";
cin>>s.age;
cout<<"Enter Branch:";
cin>>s.br;
cout<<"---PRINT DETAILS---"<<endl;
cout<<"Roll no="<<s.r_no<<endl;
cout<<"Name="<<s.name<<endl;
cout<<"Age="<<s.age<<endl;
cout<<"Branch="<<s.br<<endl;
getch();
return 0;
}

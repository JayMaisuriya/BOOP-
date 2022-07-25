#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class bank
{
char name[30];
int actno;
char type[10];
double balance;

public:
int assign(void)
{
int test;
cout<<"you have to pay 500 Rs. to open an account"<<endl;
cout<<"do you want to open account yes or no"<<endl;
cout<<"if yes press 1:"<<endl;
cout<<"if no press 0:"<<endl;
cout<<"enter your choice:"<<endl;
cin>>test;

if(test==1)
{
balance=500;
cout<<"enter your name:"<<endl;
cin>>name;
cout<<"account no:"<<endl;
cin>>actno;
cout<<"account type:"<<endl;
cin>>type;

return 1;
}
else
{
return 0;
}
}
void deposit(float b)
{
balance=balance+b;
}
void withdrow(float b)
{
if((balance-b)<500);
{
cout<<"sufficient balance to withdrow:"<<endl;
}
//else
{
balance=balance-b;
cout<<"money withdrow from your account:"<<endl;
}
}
void display(void)
{
cout<<setw(20)<<"customer name";<<setw(10)<<"actno";<<setw(15)<<"account type";<<setw(10)"balance";
cout<<setw(20)"name";<<setw(10)<<"actno";<<setw(15)<<"type";setw(10)<<"balance";
}
};
void main()
{

bank account;
int t,d;
clrscr();
t=account.assign();
if(t==1)
{
cout<<"your account is created"<<endl;
cout<<"would you want to deposit yes or no"<<endl;
cout<<"if yes press 1"<<endl;
cout<<"if no press 0"<<endl;
cout<<"enter your choice:";
float dp;
cin>>d;
if(d==1)
{
cout<<"enter money to deposit:";
cin>>dp;
account.deposit(dp);
cout<<"money added in your account:";
}
cout<<"would you want to withdrow yes or no:";
cout<<"if yes press 1:";
cout<<"if no press 0:";
cout<<"enter your choice:";
float wd;
cin>>d;
if(d==1)
{
cout<<"enter money to withdrow:";
cin>>wd;
account.withdrow(wd);
}
account.display();
}
else
{
cout<<"thank you :)";
}
getch();
}

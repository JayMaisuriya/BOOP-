#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class BANKACC
{
  char name[20],y[10];
  int balance,ac_no;
  public:
	void opn_acc();
	void deposite();
	void withdraw();
	void disp_acc();
};

void BANKACC :: opn_acc()
{
  cout<<endl<<endl;
  cout<<"ENTER YOUR NAME :\t";
  cin>>name;
  cout<<"ENTER YOUR ACCOUNT NO. :\t";
  cin>>ac_no;
  cout<<"\nTYPE OF ACCOUNT (SAVING OR CURRUNT ?) :\t";
  cin>>y;
  cout<<"\nENTER AMOUNT FOR OPNING ACCOUNT :\t";
  cin>>balance;
  cout<<"\n***YOUR ACCOUNT IS CREATED***";
}
void BANKACC :: deposite()
{
  int x=0;
  cout<<"\n ENTER AMOUNT TO DEPOSITE :\t";
  cin>>x;
  balance=balance+x;
  cout<<"\n TOTAL BALANCE IN YOUR ACCOUNT :\t"<<balance;
}
void BANKACC :: disp_acc()
{
  cout<<"\n|----------------------------------------------------------------|"<<endl;
  cout<<"YOUR NAME IS =\t"<<name<<endl;
  cout<<"YOUR ACCOUNT NO. IS =\t"<<ac_no<<endl;
  cout<<"ACCOUNT TYPE IS =\t"<<y<<endl;
  cout<<"BALANCE IN YOUR ACCOUNT IS =\t"<<balance;
  cout<<"\n|----------------------------------------------------------------|"<<endl;
}
void BANKACC :: withdraw()
{
  float amt;
  cout<<"\n ENTER AMOUNT TO WITHDRAW :\t";
  cin>>amt;
	if(balance>amt)
	{
	  balance=balance-amt;
	  cout<<"\n AFTER WITHDRAW BALANCE IS :\t"<<balance;
	}
	else
	{
	 cout<<"\n NOT ENOUGH BALANCE"<<endl;
	}
}

int main()
{
  clrscr();
  int ab,j;
  BANKACC object;
  do
  {
    cout<<"\n   1) OPEN ACCOUNT"<<endl;
    cout<<"   2) DEPOSITE MONEY"<<endl;
    cout<<"   3) WITHDRAW MONEY"<<endl;
    cout<<"   4) DISPLAY ACCOUNT"<<endl;
    cout<<"   5) EXIT"<<endl;
    cout<<"\n SELECT THE OPTION FROM ABOVE :";
    cin>>ab;
    switch(ab)
    {
	case 1:
	cout<<"\n 1) OPEN ACCOUNT"<<endl;
	object.opn_acc();
	break;

	case 2:
	cout<<"\n 2) DEPOSITE MONEY"<<endl;
	object.deposite();
	break;

	case 3:
	cout<<"\n 3) WITHDRAW MONEY"<<endl;
	object.withdraw();
	break;

	case 4:
	cout<<"\n 4) DISPLAY ACCOUNT"<<endl;
	object.disp_acc();
	break;

	case 5:
	cout<<"\n\t THANK YOU.."<<endl;
	goto end;

	default:cout<<"\n INVELID OPTION..."<<endl;
	}}
	while(1);
	end:

getch();
return 0;
}
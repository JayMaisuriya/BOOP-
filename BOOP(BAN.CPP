#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class BANKACC
{
  char name[20], add[50],y;
  int balance;
  public:
	void opn_acc();
	void deposite();
	void withdraw();
	void disp_acc();
};

void BANKACC :: opn_acc()
{
  cout<<"ENTER YOUR NAME :";
  cin>>name;
  cout<<"ENTER YOUR ADDRESS :";
  cin>>add;
  cout<<"TYPE OF ACCOUNT (SAVING OR CURRUNT ?) :";
  cin>>y;
  cout<<"ENTER AMOUNT FOR OPNING ACCOUNT :";
  cin>>balance;
  cout<<"***YOUR ACCOUNT IS CREATED***";
}
void BANKACC :: deposite()
{
  int x;
  cout<<"ENTER HOW MUCH YOU WANT TO DEPOSITE :";
  cin>>x;
  balance+=x;
  cout<<"TOTAL AMOUNT IN YOUR ACCOUNT :"<<balance;
}
void BANKACC :: disp_acc()
{
  cout<<"YOUR NAME IS ="<<name;
  cout<<"YOUR ADDRESS IS ="<<add;
  cout<<"ACCOUNT TYPE IS ="<<y;
  cout<<"BALANCE IN YOUR ACCOUNT IS ="<<balance;
}
void BANKACC :: withdraw()
{
  float amt;
  cout<<"\n WITHDRAW :";
  cout<<"ENTER AMOUNT TO WITHDRAW :";
  cin>>amt;
  balance-=amt;
  cout<<"NOW TOTAL AMOUNT IS :"<<balance;
}

int main()
{
  clrscr();
  int ab,j;
  BANKACC object;
  do
  {
    cout<<"1) OPEN ACCOUNT"<<endl;
    cout<<"2) DEPOSITE MONEY"<<endl;
    cout<<"3) WITHDRAW MONEY"<<endl;
    cout<<"4) DISPLAY ACCOUNT"<<endl;
    cout<<"5) EXIT"<<endl;
    cout<<"SELECT THE OPTION FROM ABOVE :"<<endl;
    cin>>ab;

    switch(ab)
    {
	case 1:
	cout<<"1) OPEN ACCOUNT"<<endl;
	object.opn_acc();
	break;

	case 2:
	cout<<"2) DEPOSITE MONEY"<<endl;
	object.deposite();
	break;

	case 3:
	cout<<"3) WITHDRAW MONEY"<<endl;
	object.withdraw();
	break;

	case 4:
	cout<<"4) DISPLAY ACCOUNT"<<endl;
	object.disp_acc();
	break;

	case 5:
	if(ab==5)
	{
	   exit(1);
	}
	default:
	cout<<"THIS IS NOT EXIST TRY AGAIN"<<endl;
    }
    {
    cout<<"DO YOU WANT TO SELECT NEXT OPTION THEN PRESS - Y"<<endl;
    cout<<"IF YOU WANT TO EXIT THEN PRESS - N";
    j=getch();
    if(j=='n'|| j=='N')
    exit(0);
    }
    while(j=='y'|| j=='Y')

getch();
return 0;
}
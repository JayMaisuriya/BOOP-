#include<iostream.h>
#include<conio.h>

class DADA
{
public:
	int n;
	void disp_D()
	{
	cout<<"from base class:"<<n<<endl;
	}
};
class PAPA:public DADA
{
public:
	int g;
	void disp_P()
	{
	cout<<"from derived class:"<<g<<endl;
	cout<<"from base class:"<<n<<endl;
	}
};
class BETA:public PAPA
{
public:
	int j;
	void disp
};
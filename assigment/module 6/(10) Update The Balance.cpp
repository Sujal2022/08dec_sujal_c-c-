#include<iostream>
#include<string>
using namespace std;
class account
{
public:
	char nm[50];
	int acno,actp;
	int bal;
	int amt;
	void getdata()
	{
		cout<<"-*-*-*-*-* ENTER YOUR DETAIL *-*-*-*-*-";
		cout<<"\n1. Customer Name:";
		gets(nm);
		cout<<"\nAccount Number :";
		cin>>acno;
		cout<<"\nAccount type\n1. Saving Account\n2.Current Account\n";
		cin>>actp;
		cout<<"\nAccount Balance:";
		cin>>bal;
}
void show()
{
	cout<<"\n Account Balance Is :"<<bal;
}
void withdrawdata()
	{
	cout<<"\nEnter you want to withdraw amount :";
	cin>>amt;
	if(amt>bal)
	cout<<"\nInsuficient balance";
	else
	bal=bal-amt;
	show();
	}
};


class current:public account
{
	public:
	void panelty()
	{
		if(bal<200 && actp==2)
		{
			bal=bal-20;
			show();
		}
	}
};
class saving:public account
{
	public:
	void interest()
	{
		int t;
		cout<<"\nEnter time interval in year:";
		cin>>t;
		bal=bal*(1+2*t);
		show();
	}
};
int main()
{
	account ac;
	ac.getdata();
	ac.show();
	ac.withdrawdata();
return 0;
}


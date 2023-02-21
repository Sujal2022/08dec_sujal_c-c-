#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	int acno;
	char acnm[100],actp[100];
	float bal;
public:
	bank( int accno, char *name,char *type,float bl )
	{
		acno=accno;
		strcpy(acnm, name);
		strcpy(actp, type);
		bal=bl;
	}
		void deposit();
        void withdraw();
        void Show();			
};
void bank::deposit()
{
	int depamt;
	cout<<"enter the deposist amount value:"<<endl;
	cin>>depamt;
	bal+=depamt;
}
void bank::withdraw()
{
	int witamt;
	cout<<"enter the withdraw amount value:"<<endl;
	cin>>witamt;
	if(witamt>bal)
	{
		cout<<"cannot withdrawn amount"<<endl;
	}
	bal-=witamt;
}
void bank::Show()
{
	cout<<"-------account detail--------"<<endl;
        cout<<" Account No. : "<<acno;
        cout<<" Name : "<<acno;
        cout<<" Account Type : "<<actp;
        cout<<" Balance : "<<bal;	
}
int main()
{
	 int acno;
        char acnm[100], actp[100];
        float Bal;
        cout<<" Enter Details: "<<endl;
        cout<<"1. Account No.: "<<endl;
        cin>>acno;
        cout<<"2. Name : "<<endl;
        cin>>acnm;
        cout<<"3. Account Type : "<<endl;
        cin>>actp;
        cout<<"4. Balance : "<<endl;
        cin>>Bal;
  
        bank s1(acno, acnm, actp, Bal);  
        s1.deposit(); 
        s1.withdraw(); 
        s1.Show();
        return 0;
}

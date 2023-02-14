#include<iostream>
using namespace std;
class demo
{
float p,t,r,si;
public:
	
	
 int showdata()
 {

	cout<<"enter the value of principle:";
	cin>>p;
	cout<<"enter the value of time:";
	cin>>t;
	cout<<"enter the value of rate:";
	cin>>r;
	si=p*t*r/100;
	}

 void getdata()
{
	
	cout<<"simple interest:"<<si;
}
};
int main()
{
	demo d1;
	d1.showdata();
	d1.getdata();
}

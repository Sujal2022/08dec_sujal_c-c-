#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sujal
{
float p,t,r,ci,n,pow;
public:
	int getdata()
	{
		cout<<"enter the value of principle:";
		cin>>p;
		cout<<"enter the value of time:";
		cin>>t;
		cout<<"enter the value of rate:";
		cin>>r;
	ci=p*pow((1+r/100),n)-p;
//		ci = pow(5, 2);
	}
	void showdata()
	{
		cout<<"compound interest:"<<ci;
	}
};
int main()
{
	sujal s1;
	s1.getdata();
	s1.showdata();
}

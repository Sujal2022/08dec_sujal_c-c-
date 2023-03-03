#include<iostream>
using namespace std;
class Construct
{
public:
    int si;
    Construct()
    {
    	int p,t,r;
    	cout<<"enter the value of principle:";
		cin>>p;
		cout<<"enter the value of time:";
		cin>>t;
		cout<<"enter the value of rate:";
		cin>>r;
		si=p*t*r/100;
        
        
    }
    void showdata()
    {
        cout<<"Value of no is:"<<si;
    }
};
int main()
{
    Construct con;
    con.showdata();
    return 0;
}

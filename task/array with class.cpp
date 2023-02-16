#include<iostream>
using namespace std;
class array
{
	int array[100];
public:
	int getdata()	
	{
	
	cout<<"enter the value of array is:";
	cin>>array[100];
	}
	void showdata()
	{		
	cout<<"value of array is:"<<array[100];
	}
};
int main()
{
	array s1;
	s1.getdata();
	s1.showdata();
}

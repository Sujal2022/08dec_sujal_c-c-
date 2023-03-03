#include<iostream>
#include<string.h>
using namespace std;
class school
{
public:
	char name[50];
	int age;
	void getdata()
	{
		cout<<"enter name:";
		cin>>name;
		cout<<"enter age:";
		cin>>age;
	}
	void showdata()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
	}
};
class Student: public school
{
public:
	float per;
	void getdata()
	{
		school::getdata();
		cout<<"enter percentage:";
		cin>>per;
	}
	void showdata()
	{
		school::showdata();
		cout<<"percentage:"<<per<<endl;
	}
};
class teacher : public school
{
public:
	float sal;
	void getdata()
	{
	school::getdata();
	cout<<"enter salary: ";
	cin>>sal;
	}
	void showdata()
	{
		school::showdata();
		cout<<"salary"<<sal<<endl;
	}
};
int main()
{
	Student s1;
	teacher t1;
	cout<<"enter student details:"<<endl;
	s1.getdata();
	cout<<endl<<"enter teacher detail:"<<endl;
	t1.getdata();
	cout<<endl<<"-*-*-*-*student details-*-*-*-*"<<endl;
	s1.showdata();
	cout<<endl<<"-*-*-*-*teacher details-*-*-*-*"<<endl;
	t1.showdata();
	return 0;
}

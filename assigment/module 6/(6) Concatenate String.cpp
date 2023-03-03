#include <iostream>
#include <string.h>
using namespace std;
class String 
{
public:
	char a[25], b[25];

	String(char str1[], char str2[])
	{
		strcpy(this->a, str1);
		strcpy(this->b, str2);
	}

	void operator+()
	{
		cout << "\nConcatenation: " << strcat(a,b);
	}
};

int main()
{
	char str1[50];
	char str2[50];
	cout<<"enter the 1 value :";
	cin>>str1;
	cout<<"enter the 2 value :";
	cin>>str2;
	
	String a1(str1, str2);
	+a1;
	return 0;
}


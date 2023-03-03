#include <iostream>
using namespace std;
class Swap 
{
	int temp, a, b;

public:
	Swap(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	
	friend void swap(Swap&);
};

void swap(Swap& s1)
{
	cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
	
	s1.temp = s1.a;
	s1.a = s1.b;
	s1.b = s1.temp;
	cout << "\nAfter Swapping: " << s1.a << " " << s1.b ;
}

int main()
{
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;

	Swap s(a,b);
	swap(s);
	
	
	return 0;
}


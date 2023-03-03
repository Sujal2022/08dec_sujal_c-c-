#include<iostream>
using namespace std;
#define A 5

template <class M>
void sort(M array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i] > array[j])
			{
				M temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
int main()
{
	int s[A];
	cout<<"Enter Array Elements :"<<endl;
	for (int i = 0; i < A; i++)
	{
		cin>>s[i];
	}
	sort(s,A);
	cout<<"Sort Array Are :"<<endl;
	for (int i = 0; i < A; i++)
	{
		cout<<s[i]<<"\n";
	}
	cout<<endl;
	return 0;
}

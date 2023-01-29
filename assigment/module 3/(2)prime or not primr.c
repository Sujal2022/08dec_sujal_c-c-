#include<stdio.h>
int main()
{
	int k,s=0,no;
	printf("enter the value prime or not prime:");
	scanf("%d",&no);
	for(k=2;k<no;k++)
	{
		if(no%k==0)
		{
			s=1;
			goto prime;
		}
	}
	prime:
		if(s==0)
		{
			printf("prime no",no);
		}
		else
		{
			printf("not prime no",no);
		}
		return 0;
}

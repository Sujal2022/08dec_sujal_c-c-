#include<stdio.h>
int main()
{
	int s,k,b;
	for(s=1;s<=4;s++)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(b=s;b<=4;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}

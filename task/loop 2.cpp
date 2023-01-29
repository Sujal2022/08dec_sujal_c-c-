#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5-a+1;b++)
		{
			printf("%d",b);
		}
		for(b=1;b<=2*a-2;b++)
		{
			printf(" ");
		}
		for(b=1;b<=5-a+1;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
	for(a=2;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		for(b=a;b<5;b++)
		{
			printf("  ");
		}
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}

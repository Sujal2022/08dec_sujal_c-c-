#include<stdio.h>
int fibonacci(int);
void main()
{
	int num,i;
	printf("enter the fibonacci series:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf(" %d ",fibonacci(i));
	}
}
int fibonacci(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);	
}

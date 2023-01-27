#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the munber:");
	scanf("%d",&a);
	do 
	{
		b=a%10;
		printf("%d",b);
		a=a/10;
	}while(a>0);
	return 0;
}

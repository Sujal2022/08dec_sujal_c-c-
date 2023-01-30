#include<stdio.h>
int main()
{
	int no1=0,no2=1,no3,a,num;
	printf("enter the fibonacci number:");
	scanf("%d",&num);
	printf("\n%d %d",no1,no2);
	
	for(a=2;a<num;a++)
	{
		no3=no1+no2;
		printf(" %d ",no3);
		no1=no2;
		no2=no3;
	}
}

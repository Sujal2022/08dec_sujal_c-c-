//WAP SIMPLE INTEREST
#include<stdio.h>
int main()
{
	int p,r,n,si;
	printf("the p number is:");
	scanf("%d",&p);
	printf("the r number is:");
	scanf("%d",&r);
	printf("the n number is:");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("simple interest:%d",si);
	return 0;
	
}

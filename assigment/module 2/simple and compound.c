#include<stdio.h>
int main()
{
	float p,r,n,si,ci;
	printf("the p number is:");
	scanf("%f",&p);
	printf("the r number is:");
	scanf("%f",&r);
	printf("the n number is:");
	scanf("%f",&n);
	
	si=p*r*n/100;
	printf("\n-----simple-----");
	printf("\nsimple interest:%f",si);
	ci=p*pow((1+r/100),n)-p;
	printf("\n------compound-----");
	printf("\ncompound interest:%f",ci);
	return 0;
	
}

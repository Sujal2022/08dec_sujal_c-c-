#include<stdio.h>
int main()
{
	int *a,*b,s,p,q;
	printf("value of a is:");
	scanf("%d",&p);
	printf("value of b is:");
	scanf("%d",&q);
	a=&p;
	b=&q;
	s=*a+*b;
	printf("addition is:%d",s);
}

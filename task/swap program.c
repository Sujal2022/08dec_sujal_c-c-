#include<stdio.h>
int main()
{
	int a=40,b=60;
	printf("swap of a=%d b=%d",a,b);	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swap a=%d b=%d",a,b);
	
	return 0;
}

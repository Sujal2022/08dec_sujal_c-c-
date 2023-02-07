#include<stdio.h>
int main()
{
	int s[10],j,max;
	printf("enter the maximum number:\n");
	for(j=0;j<10;j++)
	{
		scanf("%d",&s[j]);
	}
	max=s[0];
	for(j=0;j<10;j++)
	{
		if(max<s[j])
		max=s[j];
	}
	{
		printf("maximum number array is:%d",max);
	}
	return 0;
}

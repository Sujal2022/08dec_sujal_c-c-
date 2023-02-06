#include<stdio.h>
int main()
{
	int s,i,j,num[30];
		
	printf("enter the number:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]>num[j])
			{
				s=num[i];
				num[i]=num[j];
				num[j]=s;
			}
		}
	}
	printf("the number are arranged in ascending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]<num[j])
			{
				s=num[i];
				num[i]=num[j];
				num[j]=s;
			}
		}
	}
	printf("the number are arranged in descending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}
}

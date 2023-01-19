#include<stdio.h>
int main()
{
	int s,k;
	for(s=1;s<=5;s++)
	{
		for(k=5;k>s;k--)
		{
			printf(" ");
		}
		for(k=1;k<=s;k++)
		{
			printf("%d",k);
		}
		for(k=k-2;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}

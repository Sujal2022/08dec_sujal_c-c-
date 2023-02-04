#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("enter the string:");
	gets(str);
	while( str[i] != '\0')
	{		
		i++;
	}
		printf("lenght of string is:%d",i);
	
}

#include<stdio.h>
int main()
{
	char s;
	printf("the s value is:");
	scanf("%c",&s);
	if((s>='a'&&s<='z')||(s>='A'&& s<='Z'))
	{
		printf("alphabet");
	}
	else if((s>='0' && s<='9'))
	{
		printf("number");
	}
	else
	{
		printf("special charcter");
	}
	return 0;
}

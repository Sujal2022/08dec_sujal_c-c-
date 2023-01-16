#include<stdio.h>
int main()
{
	int lc,uc;
	char s;
	printf("enter an alphabet:");
	scanf("%c",&s);
	lc= ((s=='a')||(s=='e')||(s=='i')||(s=='o')||(s=='u'));
	uc= ((s=='A')||(s=='E')||(s=='I')||(s=='O')||(s=='U'));
	if(lc||uc)
	{
		printf("%c is vowel",s);
	}
	else
	{
		printf("%c is constant",s);
	}
	return 0;
}

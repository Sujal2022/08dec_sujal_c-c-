#include<stdio.h>
struct empdata
{
	int no,age;
	char nm[20],add[20];
};
int main()
{
	struct empdata s[10];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter employee no:");
		scanf("%d",&s[i].no);
		printf("\nenter employee name:");
		scanf("%s",&s[i].nm);
		printf("\nenter employee address:");
		scanf("%s",&s[i].add);
		printf("\nenter employee age:");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<5;i++)
	{
		printf("\nemployee \n no is:%d",s[i].no);
		printf("\n name is:%s",s[i].nm);
		printf("\n address is:%s",s[i].add);
		printf("\n age is:%d",s[i].age);
	}
}

#include<stdio.h>
int main()
{
	float eng,guj,sci,tm,per;
	printf("enter eng mark is:");
	scanf("%f",&eng);
	printf("enter guj mark is:");
	scanf("%f",&guj); 
	printf("enter sci mark is:");
	scanf("%f",&sci);
	tm=eng+guj+sci;
	per=tm/3;
	if((eng>=33)&&(guj>=33)&&(sci>=33))
	{

		printf("\ntotalmark:%f",tm);
		printf("\nprcentage:%f",per);
		if(per>70)
		{
			printf("\nfirst class");
		}
		else if((per>=50)&&(per<=60))
		{
			printf("\nsecond class");
		}
		else if((per>=33)&&(per<=49))
		{
			printf("\npass class");
		}
	}
	else
	{
		printf("fail");
	}
}


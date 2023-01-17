#include<stdio.h>
int main()
{
	int math,sci,ss,hin,eng,total;
	float per;
	printf("the maths mark is:");
	scanf("%d",&math);
	printf("the sci mark is:");
	scanf("%d",&sci);
	printf("the ss mark is:");
	scanf("%d",&ss);
	printf("the hin mark is:");
	scanf("%d",&hin);
	printf("the eng mark is:");
	scanf("%d",&eng);
	total=math+sci+ss+hin+eng;
	per=total/5;
	if(math>=33&&sci>=33&&ss>=33&&hin>=33&&eng>=33)
	{
		printf("total mark:%d",total);
		printf("\npercentage:%f",per);
	if(per>75)
	{
		printf("distinction");
	}
	else if ((per>60)&&(per<=75))
	{
		printf("\nfirst class");
    	}
    	else if((per>50)&&(per<=60))
    	{
    		printf("\nsecond class");
	}
	else if ((per>35)&&(per<=50))
	{
		printf("\npass class");
	}
	}	
    else 
    {
    	printf("\nfail");
    }
	return 0;
}

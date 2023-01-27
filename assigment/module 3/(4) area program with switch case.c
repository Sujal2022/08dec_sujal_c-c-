#include<stdio.h>
int main()
{
	int choice;
	float s,br,l,b,h,a,r;
	printf("\n1. enter area of triangle:");
	printf("\n2. enter area of rectangle:");
	printf("\n3. enter area of circle:");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the base:");
			scanf("%f",&b);
			printf("enter the height:");
			scanf("%f",&h);
			a=0.5*b*h;
			printf("area of triangle:%f",a);
			break;
		case 2:
			printf("enter the breath:");
			scanf("%f",&br);
			printf("enter the lenght:");
			scanf("%f",&l);
			a=br*l;
			printf("area of rectangle:%f",a);
			break;
		case 3:
			printf("enter the radius:");
			scanf("%f",&r);
			a=3.142*r*r;
			printf("area of circle:%f",a);
			break;
		default:
			 printf("please enter valid choice");
			 break;	
			
			
	}
}

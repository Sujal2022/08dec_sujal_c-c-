#include<stdio.h>
int main()
{
	int choice,chr,su;
	printf("WELOME TO BALAJI STATIONARY");
	printf("\n 1. Pen");
	printf("\n 2. Pencil");
	printf("\n 3. Notebook");
	printf("\n 4. Leadpencil");
	printf("\n 5. Sharpener");
	printf("\n 6. Eraser");
	printf("\nplease enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("\npen");
				printf("\n1.Parker Pens");
				printf("\n2.Pentel Pens");
				printf("\n3.Bic Round Stic Pen");
				printf("\n4.SS Pen");
				printf("\n5.Cello Pen");
				printf("\nplease enter your choice:");
				scanf("%d",&chr);
				switch(chr)
				{
					case 1:
						printf("\n1.Parker Pens Price is: 300");
						printf("\n You Purchased Parker Pens ");
						printf("\n Thank You For Visit ");
						break;
								
					case 2:
						printf("\n1.Pentel Pens Price is : 450");
						printf("\n You Purchased Pentel Pens");
						printf("\n Thank You For Visit");
						break;
								
					case 3:
						printf("\n1.Bic Round Stic Pen Price is : 250");
						printf("\n You Purchased Bic Round Stic Pen ");
						printf("\n Thank You For Visit  ");	
						break;
								
					case 4:
					  	printf("\n1. SS Pen Price is : 5");
					  	printf("\n You Purchased SS Pen  ");
					  	printf("\n Thank You For Visit ");
					  	break;
						
					case 5:
						printf("\n1. Cello Pen Price is : 20");
						printf("\n You Purchased Cello Pen ");
						printf("\n Thank You For Visit ");
						break;
					default:
					 printf("please enter valid choice");		
				}
				break;
		case 2:
				printf("\npencil");
				printf("\n1. Nataraj Pencils");
				printf("\n2. Apsara Pencils ");
				printf("\n3. DOMS Pencils");
				printf("\n4. Rabbit Pencils");
				printf("\n5. Faber Castell Pencils");
				printf("\nplease enter your choice:");
				scanf("%d",&chr);
				switch(chr)
				{
					case 1:
						printf("\n1. Nataraj Pencils Price is: 80");
						printf("\n You Purchased Nataraj Pencils ");
						printf("\n Thank You For Visit ");
						break;
								
					case 2:
						printf("\n1.Apsara Pencils Price is : 50");
						printf("\n You Purchased Apsara Pencils");
						printf("\n Thank You For Visit");
						break;
								
					case 3:
						printf("\n1. DOMS Pencils Price is : 90");
						printf("\n You Purchased DOMS Pencils");
						printf("\n Thank You For Visit  ");	
						break;
								
					case 4:
					  	printf("\n1. Rabbit Pencils Price is : 110");
					  	printf("\n You Purchased Rabbit Pencils  ");
					  	printf("\n Thank You For Visit ");
					  	break;
						
					case 5:
						printf("\n1. Faber Castell Pencils Price is : 120");
						printf("\n You Purchased Faber Castell Pencils ");
						printf("\n Thank You For Visit ");
						break;
					default:
					 printf("please enter valid choice");		
				}
				break;
		case 3:
				printf("\nNotebook");
				printf("\n1. Classmate Notebook");
				printf("\n2. Doms Notebook");
				printf("\n3. Arihant Notebook");
				printf("\nplease enter your choice:");
				scanf("%d",&chr);
				switch(chr)
				{
					case 1:
						printf("\n1. Classmate Notebook Price is: 80");
						printf("\n You Purchased Classmate Notebook ");
						printf("\n Thank You For Visit ");
						break;
								
					case 2:
						printf("\n1.Doms Notebook Price is : 70");
						printf("\n You Purchased Doms Notebook");
						printf("\n Thank You For Visit");
						break;
								
					case 3:
						printf("\n1.Arihant Notebook Price is : 60");
						printf("\n You Purchased Arihant Notebook ");
						printf("\n Thank You For Visit  ");	
						break;
					default:
					 printf("please enter valid choice");	
				}
				break;
		case 4:
			printf("\nLeadpencil");
				printf("\n1. Classmate Leadpencil");
				printf("\n2. Doms Leadpencil");
				printf("\n3. Venus Leadpencil");
				printf("\nplease enter your choice:");
				scanf("%d",&chr);
				switch(chr)
				{
					case 1:
						printf("\n1. Classmate Leadpencil Price is: 30");
						printf("\n You Purchased Classmate Leadpencil ");
						printf("\n Thank You For Visit ");
						break;
								
					case 2:
						printf("\n1.Doms Leadpencil Price is : 50");
						printf("\n You Purchased Doms Leadpencil");
						printf("\n Thank You For Visit");
						break;
								
					case 3:
						printf("\n1. Venus Leadpencil Price is : 25");
						printf("\n You Purchased Venus Leadpencil ");
						printf("\n Thank You For Visit  ");	
						break;
					default:
					 printf("please enter valid choice");	
				}
				break;
		case 5:
			printf("\nSharpener");
				printf("\n1. TAAJ Multicolor Pencil Sharpner");
				printf("\n2. Doms Sharpener");
				printf("\n3. Plastic Pencil Sharpener");
				printf("\nplease enter your choice:");
				scanf("%d",&chr);
				switch(chr)
				{
					case 1:
						printf("\n1.  TAAJ Multicolor Pencil SharpnerPrice is: 10");
						printf("\n You Purchased  TAAJ Multicolor Pencil Sharpner ");
						printf("\n Thank You For Visit ");
						break;
								
					case 2:
						printf("\n1.Doms Sharpener Price is : 45");
						printf("\n You Purchased Doms Sharpener");
						printf("\n Thank You For Visit");
						break;
								
					case 3:
						printf("\n1.Plastic Pencil Sharpener Price is : 25");
						printf("\n You Purchased Plastic Pencil Sharpener ");
						printf("\n Thank You For Visit  ");	
						break;
					default:
					 printf("please enter valid choice");	
				}
				break;
		case 6:
			printf("\nEraser");
				printf("\n1. Natraj Eraser");
				printf("\n2. Doms Eraser");
				printf("\n3.Faber-Castell Dust-Free Eraser ");
				printf("\nplease enter your choice:");
				scanf("%d",&chr);
				switch(chr)
				{
					case 1:
						printf("\n1.Natraj Eraser Price is: 10");
						printf("\n You Purchased Natraj Eraser ");
						printf("\n Thank You For Visit ");
						break;
								
					case 2:
						printf("\n1. Doms EraserPrice is : 20");
						printf("\n You Purchased  Doms Eraser");
						printf("\n Thank You For Visit");
						break;
								
					case 3:
						printf("\n1.Faber-Castell Dust-Free Eraser Price is : 5");
						printf("\n You Purchased Faber-Castell Dust-Free Eraser");
						printf("\n Thank You For Visit  ");	
						break;
					default:
					 printf("please enter valid choice");	
				}
				break;
				
					
				
		
		
		
			
		
		
			
			
	}
}

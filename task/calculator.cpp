#include <stdio.h>    
  
int main()  
{  
   
    int choice,n1,n2;  
    float sum; 
    do  
    {  
    
        printf (" ----------select any one---------- ");  
        printf ("\n 1 Addition::");      
        printf ("\n 2 Subtraction:");
        printf ("\n 3 Multiplication:");
        printf ("\n 4 Division:");
        printf (" \n Please, Make a choice:");
        scanf ("%d", &choice);       
      
    
    switch (choice)  
    {  
        case 1:    
            printf (" You chose: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            sum = n1 + n2;   
            printf (" Addition is: %f", sum);  
            break;   
              
        case 2:              
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            sum = n1 - n2;   
            printf (" Subtraction is: %f", sum);  
            break;  
              
        case 3:                
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            sum = n1 * n2;  
            printf (" Multiplication of two numbers is: %f", sum);  
            break;  
              
        case 4:  
            printf (" You chose: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2); 
			sum = n1/n2;
			printf("Division is :%f",sum); 
            break;                             
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (choice != 5);  
  
    return 0;        
} 

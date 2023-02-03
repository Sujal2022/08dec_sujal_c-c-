#include<stdio.h>
int main()
{
    int i,j;
    int array[2][2],flag[2][2],sum[2][2];
    	printf("first matrix value is:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nValue of array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    	printf(" second matrix value is:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
         	printf("\nValue of array[%d][%d]:",i,j);
            scanf("%d",&flag[i][j]);   
        }
        
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
         	sum[i][j]=array[i][j]+flag[i][j];
         	printf(" %d ",sum[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}

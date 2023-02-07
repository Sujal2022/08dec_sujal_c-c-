#include<stdio.h>

int main()
{
 int i,j;
 int a[10][10], k;

 printf("Enter matrix elements:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 2;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
  printf("\n");
 }
 k = a[0][0];
 for(i=0;i< 3;i++)
 {	
  for(j=0;j< 2;j++)
  {
   if(a[i][j]>k)
   {
    k = a[i][j];
   }
  }
 }
 printf("Largest = %d\n", k);

}

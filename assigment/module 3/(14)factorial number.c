#include<stdio.h>
long int factorial(int a)
{
    if (a <= 1)
        return 1;
    return a*factorial(a-1);
}
int main()
{
    int a;
    printf("Enter the fatorial number:");
    scanf("%d",&a);
    printf("Factorial number of %d is:%ld",a,factorial(a));
}


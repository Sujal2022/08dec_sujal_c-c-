#include<stdio.h>
int checkPalindrome(int no)
{

    static int sum=0,k;

    if(no!=0)
	{
        k=no%10;
        sum=sum*10+k;
        checkPalindrome(no/10);
    }
    return sum;
}
int main()
{
    int no,sum;
    printf("Enter any number:");
    scanf("%d",&no);
    sum = checkPalindrome(no);
    if(no==sum)
    {
    	printf("\n%d is a palindrome\n",no);
	}    
    else
    {
    	printf("\n%d is not a palindrome\n",no);
	}
    return 0;
}


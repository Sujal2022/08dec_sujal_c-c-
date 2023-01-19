#include<stdio.h>
int main()
{
	int height=10;
	int w= (2*height)-1;
    int n = w / 2, i, j;
    for (i = 0; i < height; i++) 
	{
        for (j = 0; j <= w; j++) 
		{
            if (j == n || j == (w - n)
                || (i == height / 2 && j > n
                    && j < (w - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
}

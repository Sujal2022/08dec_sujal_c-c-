#include <stdio.h>

void SortArray(int s, int* p)
{
	int i, j, temp;	

	for (i = 0; i < s; i++)
	{
		for (j = i + 1; j < s; j++)
		{
			if(*(p + j) < *(p + i))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}			
		}
	}
	printf("\nSorted Array Elements using Pointer:\n ");
	for(i = 0; i < s; i++)
	{
		printf("%d  ", *(p + i));
	}	
}

int main()
{
	int s,i;

	printf("\nEnter Array Size to Sort using Pointers: ");
	scanf("%d", &s);

	int arr[s];

	printf("\nPlease Enter %d elements of an Array: ", s);
	for( i = 0; i < s; i++)
	{
		scanf("%d", &arr[i]);
    }  	
	SortArray(s, arr);   
	printf("\n");	
}


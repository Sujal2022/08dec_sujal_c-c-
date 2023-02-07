#include <stdio.h>
#define max 5

int main() {
	float N[5];
	int i;
	printf("enter the 5 element of the array:\n");
	for(i = 0; i < 5; i++) {
		scanf("%f", &N[i]);
	}
	for(i = 0; i < 5; i++) {
		if(N[i] < max) {
			printf("A[%f] = %.1f\n", i, N[i]);
		}
	}
	return 0;
}


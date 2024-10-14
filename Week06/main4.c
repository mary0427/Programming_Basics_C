#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	int sum = 0;
	int i;
	
	printf("Enter a number: ");
	scanf("%i",&n);
	
	for (i=0; i<n; i++)
		sum += (i+1);
	printf("The result is %i",sum);
	return 0;
}

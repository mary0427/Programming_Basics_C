#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int answer = 50;
	int n;
	int trials;
	
	do
	{
	printf("Guess a number: ");
	scanf("%i",&n);
	if (n < answer)
		printf("Low!\n");
	else if (n>answer)
		printf("High!\n");
	trials++;
	}while (answer != n);
	
	printf("Congratulation! Trials: %i",trials);
	
	return 0;
}

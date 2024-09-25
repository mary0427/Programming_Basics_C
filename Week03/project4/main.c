#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float a;
	float b;
	
	printf("enter two integers: ");
	scanf("%f, %f",&a,&b);
	
	printf("%f / %f = %.6f", a, b, a/b);
	return 0;
}

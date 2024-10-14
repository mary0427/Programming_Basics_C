#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	char c;
	int result;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i",&a,&c,&b);
	
	switch(c){
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
	}
	
	printf("= %i",result);
	
	return 0;
}

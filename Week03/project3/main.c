#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char c;
	char c_out;
	
	printf("enter a character: ");
	scanf("%c",&c);
	
	c_out = c+1;
	printf("The next character of %c(%i) is %c(%i)",c,c,c_out,c_out);
	
	return 0;
}

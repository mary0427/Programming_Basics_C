#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void square_1(int a){
	a = a*a;
}

int square_2(int a){
	return(a*a);
}

int main(void) {
	
	int a = 2;
	square_1(a);
	printf("a=%i\n",a);
	
	a =2;
	a = square_2(a);
	printf("a=%i\n",a);
	
	return 0;
}

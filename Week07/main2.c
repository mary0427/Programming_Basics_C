#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	int result;
	
	result = a + b;
	
	return result;
}

int square(int n){
	int result;
	
	result = n*n;
	
	return result;
}

int get_max(int x, int y){
	int result;
	
	if (x > y)
		result = x;
	else
		result = y;
		
	return result;
}

int main(void) {
	int a, b;
	printf("Enter the integers: ");
	scanf("%i %i",&a,&b);
	
	printf("Result - sum: %i, Square: %i, Max: %i",sumTwo(a,b),square(a),get_max(a,b));
	return 0;
}

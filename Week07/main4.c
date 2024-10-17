#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(){
	int i;
	
	printf("Enter the value: ");
	scanf("%i",&i);
	return i;
}

int factorial(int n){
	int res = 1;
	int i;
	
	for (i=1; i<=n; i++)
		res *= i;
	return res; 
}

int combination(int n,int r){
	int res;
	res = factorial(n)/(factorial((n-r))*factorial(r));
	
	return res;
}

int main(void) {
	int n,r;
	
	n = get_integer();
	r = get_integer();
	
	printf("The result of C(%i,%i) is %i.",n,r,combination(n,r));
	return 0;
}

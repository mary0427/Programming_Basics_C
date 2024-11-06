#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[5];
	printf("5명의 점수를 입력하세요. \n");
	
	for(i=0;i<SIZE;i++)
		scanf("%d",&grade[i]);
	
	for(i=0;i<SIZE;i++)
		printf("grade[%i] = %i\n",i,grade[i]);
		
	return 0;
}

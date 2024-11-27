#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM]; //구조체배열선언 
	

	int max =0;
	int maxi =0;
	float sum =0;
	float avg;
	
	int i;
	for (i=0;i<4;i++){
		printf("Input the ID: ");
		scanf("%i",&s[i].ID);
		
		printf("Input the score: ");
		scanf("%i",&s[i].score);
		
		sum += s[i].score;
		if (max< s[i].score){
			max = s[i].score;
			maxi = i;
		}
	}

	avg = sum/4;
	printf("The average of the score: %f\n",avg);
	printf("The highest score - ID: %i, score: %i",s[maxi].ID,max);	
}

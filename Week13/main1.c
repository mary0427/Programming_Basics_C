#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[50];
	float grade;
};

int main(void) {
	struct student s = {0,"",0}; //s라는 실체 생성,초기화 
	
	s.ID = 21;
	strcpy(s.name, "Jihyeon");
	s.grade = 4.3;
	
	printf("ID: %i\n",s.ID);
	printf("name: %s\n",s.name);
	printf("grade: %f\n",s.grade);
	
	return 0;
}

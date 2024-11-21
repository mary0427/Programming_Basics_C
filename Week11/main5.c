#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	fp = fopen("C:\sample.txt","w");
	
	int i;
	for (i=0;i<3;i++){
		char str[30];
		printf("input a word:");
		scanf("%s",str);
		fprintf(fp,"%s\n",str);
	}

	fclose(fp);
	return 0;
}

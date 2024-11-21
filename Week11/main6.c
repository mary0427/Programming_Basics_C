#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp = NULL;
	fp = fopen("sample.txt","r");
	
	if(fp ==NULL)
		printf("파일을 못열음\n");
	
	
	/*char c;
	while ((c=fgetc(fp))!=EOF)
		putchar(c);
	*/
	
	char str[30];
	while (1){
		char* pchar = fgets(str,30,fp); //가지고온 문자열 반환 
		if (pchar==NULL) //파일의 끝에서는 널포인터 반환 
			break;

		printf("%s",str);
	}
		
	fclose(fp);
	
	return 0;
}

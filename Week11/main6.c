#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp = NULL;
	fp = fopen("sample.txt","r");
	
	if(fp ==NULL)
		printf("������ ������\n");
	
	
	/*char c;
	while ((c=fgetc(fp))!=EOF)
		putchar(c);
	*/
	
	char str[30];
	while (1){
		char* pchar = fgets(str,30,fp); //������� ���ڿ� ��ȯ 
		if (pchar==NULL) //������ �������� �������� ��ȯ 
			break;

		printf("%s",str);
	}
		
	fclose(fp);
	
	return 0;
}

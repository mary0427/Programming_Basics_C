#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int t=0;
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	printf("%s\n",str);

	int i=0;
	while (str[i]!=0){
		printf("%c",str[i]);
		i++;
	}
	return 0;
}

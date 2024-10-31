#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int all_files;
//static int all_files;
//extern access impossible -> error

extern void sub();


int main(void) {
	sub();
	printf("%d\n",all_files);
	return 0;
}



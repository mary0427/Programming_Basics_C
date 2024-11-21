#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *proverb = "All that glisters is not gold.";

/*void setPointer(char *q){
	q = proverb;
}

int main(void) {
	char *p = "zzz";
	setPointer(p); //C에서 함수인자로 전달된 포인터p는 q로복사되어 전달됨 
	printf("%s \n",p); // 그래서 원래 포인터 주소p는  수정 되지않았음 
	// p는 여전히 zzz가리킴. 
	return 0;  
}
*/

//문구 바뀌도록 수정(이중포인터 이용) 

void setPointer(char **q) {
    *q = proverb;  // 포인터q가 가리키는 값을 (원본p를 가리킴) 변경
}

int main(void) {
    char *p = "zzz";     // p는 "zzz"를 가리킴
    setPointer(&p);      // p의 "주소"를 q(인자)로 전달(복사) 
    printf("%s \n", p);  //p의 주소를 전달했기에 원본p 변경가능. 
	// p가 "proverb"를 가리킴
    return 0;
}

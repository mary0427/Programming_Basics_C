#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *proverb = "All that glisters is not gold.";

/*void setPointer(char *q){
	q = proverb;
}

int main(void) {
	char *p = "zzz";
	setPointer(p); //C���� �Լ����ڷ� ���޵� ������p�� q�κ���Ǿ� ���޵� 
	printf("%s \n",p); // �׷��� ���� ������ �ּ�p��  ���� �����ʾ��� 
	// p�� ������ zzz����Ŵ. 
	return 0;  
}
*/

//���� �ٲ�� ����(���������� �̿�) 

void setPointer(char **q) {
    *q = proverb;  // ������q�� ����Ű�� ���� (����p�� ����Ŵ) ����
}

int main(void) {
    char *p = "zzz";     // p�� "zzz"�� ����Ŵ
    setPointer(&p);      // p�� "�ּ�"�� q(����)�� ����(����) 
    printf("%s \n", p);  //p�� �ּҸ� �����߱⿡ ����p ���氡��. 
	// p�� "proverb"�� ����Ŵ
    return 0;
}

/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char alp, next_alp, lower_alp;

	//alp �Է�
	printf("Enter an upper letter(A-Y): ");
	scanf("%c", &alp);

	//next_alp, lower_alp ���
	next_alp = alp + 1;
	lower_alp = alp + 32;

	//��� ���
	printf("Character given is %c (%d)\n", alp, alp);
	printf("The next character is %c (%d)\n", next_alp, next_alp);
	printf("The lower case letter is %c (%d)\n", lower_alp, lower_alp);

	return 0;
}
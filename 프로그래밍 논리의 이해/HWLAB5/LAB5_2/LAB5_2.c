/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char alp;
	int value;

	//alp�Է�
	printf("Enter an alphabet: ");
	scanf("%c", &alp);

	//��� ���
	printf("%c %d\n", alp, alp);

	//value �Է�
	printf("Enter a ascii value: ");
	scanf("%d", &value);

	//��� ���
	printf("%d %c\n", value, value);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char string[20];
	char c;
	int i = 0, count = 0;

	printf("Enter a String: "); //���ڿ� �Է�
	scanf("%s", string);

	printf("Enter a character: "); //���� �Է�
	scanf(" %c", &c);


	for (i = 0; string[i] != NULL; i++) { //���ڿ��� ������ ������ �ݺ�

		if (string[i] == c) //���ڿ� ������ count ����
			count++;
	}

	printf("'%c' is appeared %d times\n", c, count);
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num;

	do {
		printf("Enter a number(���): ");
		scanf("%d", &num);
	
	} while (num < 0);

	printf("�Էµ� ����� %d\n", num);

	return 0;
}
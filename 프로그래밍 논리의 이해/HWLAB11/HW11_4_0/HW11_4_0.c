/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num, prime = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {

		if (num % i == 0)
			prime = 1;
	}

	if (prime == 1)
		printf("�Ҽ��� �ƴմϴ�.\n");

	else
		printf("�Ҽ��Դϴ�.\n");

	return 0;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num;

	//���� �Է�
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {

		if (num % i == 0) //��� �Ǻ�
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}
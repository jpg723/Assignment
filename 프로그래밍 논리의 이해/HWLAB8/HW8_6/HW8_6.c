/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num;
	long long result = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {

		result *= i;
		printf("%d! = %d\n", i, result);
	}

	return 0;
}
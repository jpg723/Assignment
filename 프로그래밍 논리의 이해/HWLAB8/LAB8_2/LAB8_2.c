/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int dan;

	printf("Enter a number: ");
	scanf("%d", &dan);

	/* 5��
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", 5, i, (5 * i));
	}
	*/

	for (int i = 1; i <= 9; i++) {

		printf("%d * %d = %d\n", dan, i, (dan * i));
	}

	return 0;
}
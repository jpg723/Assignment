/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num, index = 0;
	int binary[8];

	printf("Enter ���<256>: ");
	scanf("%d", &num);

	while (num != 0) {

		binary[index] = num % 2;
		num = num / 2;
		index++;
	}

	for (int i = index - 1; i >= 0; i--)
		printf("%d", binary[i]);
	printf("\n");

	return 0;
}
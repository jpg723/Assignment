/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int dan, answer, result = 0, count = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�?: ");
	scanf("%d", &dan);
	
	for (int i = 1; i <= 9; i++) {

		printf("%d * %d = ", dan, i);
		scanf("%d", &answer);

		result = dan * i;

		if (result == answer)
			count++;

		result = 0;
	}

	printf("%d���� �����ܿ��� %d�� �¾ҽ��ϴ�.\n", dan, count);

	return 0;
}
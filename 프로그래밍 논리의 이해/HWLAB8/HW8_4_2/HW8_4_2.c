/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int i = 1, j = 2;

	while (i < 10) { //��

		while (j < 9) { //��

			printf("%d * %d = %d\t", i, j, (i * j));
			j += 2;
		}
		printf("\n");
		i++;
		j = 2; //�ʱ�ȭ
	}

	return 0;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num, i = 0, total = 0;

	/*1�ܰ�
	while (i < 5){

		printf("0���� ū ���� �Է�(%d��°): ", i + 1);
		scanf("%d", &num);

		i++;
		total += num;
	}

	printf("�Էµ� ���� �� ��: %d\n", total);

	*/

	while (i < 5) {
		
		do {
			printf("0���� ū ���� �Է�(%d��°): ", i + 1);
			scanf("%d", &num);
		
		} while (num <= 0);

		i++;
		total += num;
	}

	printf("�Էµ� ���� �� ��: %d\n", total);

	return 0;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int income[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search, month = 0;

	printf("Ž���� ������? ");
	scanf("%d", &search);

	for (int i = 0; i < 12; i++) {

		if (search == income[i]) {
			month = i + 1;
			break;
		}

	}

	if (month == 0)
		printf("���� %d�� ���� ���� �����ϴ�.\n", search);

	else
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�.\n", search, month);

	return 0;
}
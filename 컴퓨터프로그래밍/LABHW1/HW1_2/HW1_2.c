/*HW1_2 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int coins[4] = { 500, 100, 50, 10 };
	int change, i = 0;
	int count[4];

	//�Ž����� �Է�
	printf("Enter the amount of change: ");
	scanf("%d", &change);
	
	//���� ���� �迭 �ʱ�ȭ
	for (int i = 0; i < 4; i++)
		count[i] = 0;

	//���� �Ž����� ���
	while (change != 0) {

		count[i] = change / coins[i];
		change = change % coins[i];
		i++;
	}

	//��� ���
	for (int i = 0; i < 4; i++)
		printf("%d coin: %d\n", coins[i], count[i]);

	return 0;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int incomes[7];
	int best = -999, bestIndex = 0, total = 0;
	double average = 0;

	//������ �б� ���� for��
	for (int i = 0; i < 7; i++) {

		printf("Enter the income of day %d: ", i + 1);
		scanf("%d", &incomes[i]);
	}

	printf("-------------------------------------\n");

	//�ְ� ���� ����� ���� for��
	for (int i = 0; i < 7; i++) {

		if (best < incomes[i]) {
			best = incomes[i];
			bestIndex = i + 1;
		}
	}

	//�ְ� ���� ���
	printf("The best income: %d in day %d\n", best, bestIndex);
	printf("-------------------------------------\n");

	//���� ����� ���� for��
	for (int i = 0; i < 7; i++)
		total += incomes[i];

	//��� ���
	average = (double)total / 7;

	//����, ��� ���
	printf("The total is %d\n", total);
	printf("The average is %.1lf\n", average);

	//��պ��� ������ ���Ҷ� ���� ����ϱ� ���� for��
	printf("The good days and theeir incomes are\n");
	for (int i = 0; i < 7; i++) {
		if (incomes[i] > average)
			printf("day %d: %d\n", i + 1, incomes[i]);
	}

	return 0;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, score, total = 0, i = 0;
	double average;

	//�л� �� �Է�
	printf("Enter a student number: ");
	scanf("%d", &num);

	//�л� ����ŭ ���� �Է��ϰ� ��ü �� ���ϱ�
	while (i < num) {

		printf("Enter a score: ");
		scanf("%d", &score);

		total += score;
		i++;
	}

	//��� ���

	if (num == 0)
		average = 0;

	else
		average = (double)total / num;


	//��� ���
	printf("The total is %d\n", total);
	printf("The average is %.1lf\n", average);

	return 0;
}
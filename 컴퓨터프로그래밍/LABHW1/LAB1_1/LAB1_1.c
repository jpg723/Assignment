/*��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num[5];
	int total = 0;
	double average;

	//���� �Է�
	for (int i = 0; i < 5; i++) {
		
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num[i]);
	}

	//���� ���
	for (int i = 0; i < 5; i++)
		total += num[i];

	//��� ���
	average = total / 5;

	//����, ��� ���
	printf("-------------------------------------\n");
	printf("������ %d\n", total);
	printf("����� %lf\n", average);
	printf("-------------------------------------\n");

	//�迭�� ���� ���
	for (int i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}
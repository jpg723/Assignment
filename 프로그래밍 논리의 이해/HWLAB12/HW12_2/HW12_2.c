/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	int num, total = 0, average = 0;
	int randNum[100];

	//����� ���� �� ���� �Է�
	printf("Enter the number of random numbers: <<=100>: ");
	scanf("%d", &num);

	srand(time(NULL));

	for (int i = 0; i < num; i++) {

		randNum[i] = rand() % 100; //�迭�� ������ �ֱ�

		total += randNum[i]; //���� ���
	}

	average = total / num; //��� ���

	printf("������ ����� %d\n", average); //��� ���
	
									 //���� ���
	printf("�߻��� ������");

	for (int i = 0; i < num; i++) {

		if (i % 5 == 0) //5���� ���
			printf("\n");

		printf("%5d", randNum[i]);
	}

	printf("\n");
	return 0;
}
/*LAB1_2 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//���� ����
	int num, max = 0;
	int data[50];

	//����� ������ ���� �Է�
	printf("Enter the number of random numbers: <<=50>: ");
	scanf("%d", &num);

	//���� ����
	srand(time(NULL));

	for (int i = 0; i < num; i++)
		data[i] = rand() % 100;

	//�ִ밪 ���ϱ�
	for (int i = 0; i < num; i++) {

		if (max < data[i])
			max = data[i];
	}
	
	//�ִ밪 ���
	printf("�ִ밪�� %d\n", max);
	printf("-----------------------------------------");

	//���� ���
	for (int i = 0; i < num; i++) {

		if (i % 5 == 0) //�� �ٿ� 5���� ���
			printf("\n");

		printf("%5d", data[i]);
	}
	
	printf("\n");
	return 0;
}
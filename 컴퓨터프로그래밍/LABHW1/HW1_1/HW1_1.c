/*HW1_1 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//���� ����
	int num;
	int count[10];
	int data[100];

	//����� ���� ���� �Է�
	printf("Enter the number of random numbers:<<=100>: ");
	scanf("%d", &num);

	//���� ����
	srand(time(NULL));

	for(int i = 0; i < num; i++) 
		data[i] = rand() % 10;

	//count�迭 �ʱ�ȭ
	for (int i = 0; i < 10; i++)
		count[i] = 0;
	
	//count�迭�� ���� ����
	for (int i = 0; i < num; i++) {

		for (int j = 0; j < 10; j++) {

			if (data[i] == j)
				count[j]++;
		}
	}

	//���� ���
	for (int i = 0; i < 10; i++)
		printf("%d�� ������ %d\n", i, count[i]);

	//���� ���
	printf("-------------------------------------------\n");
	printf("�߻��� ������");

	for (int i = 0; i < num; i++) {

		if (i % 5 == 0)
			printf("\n");

		printf("%5d", data[i]);
	}

	printf("\n");

	return 0;
}
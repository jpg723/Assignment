/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	int num[10];
	int total = 0, average;
	
	srand(time(NULL));

	// ������ �迭�� �ֱ� ���� for��, �迭�� �� ���ϱ�
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 100;
		total += num[i];
	}

	average = total / 10; //��� ���
	printf("����� %d\n", average); //��� ���

	// �迭 ����� ���� for��
	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);
	printf("\n");

	return 0;
}
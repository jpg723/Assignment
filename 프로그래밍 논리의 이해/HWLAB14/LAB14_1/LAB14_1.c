/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int);
int main(void) {

	int data[10];
	int average;

	srand(time(NULL));
	generateData(data, 10);

	printf("������Ʈ���� ");
	printData(data, 10);

	average = averageData(data, 10);
	printf("������Ʈ�� ����� %d\n", average);

	//�ִ밪 ���ϱ� ȣ��
	printf("������Ʈ�� �� ���� ū ���� %d\n", maxData(data, 10));

}

void generateData(int a0[], int size) {

	int i;

	for (i = 0; i < size; i++)
		a0[i] = rand() % 100;
}

void printData(int a2[], int size)
{
	int i;
	for (i = 0; i < size; i++) // Index 0..9����
		printf("%d ", a2[i]);
	printf("\n");
	return;
}

int averageData(int a1[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++) {

		sum += a1[i];
	}

	return sum / size;
}

int maxData(int a3[], int size)
{
	int i, best = a3[0];
	for (i = 0; i < size; i++) { // Index 0..9����
		if (best < a3[i])
			best = a3[i];
	}

	return best;
}
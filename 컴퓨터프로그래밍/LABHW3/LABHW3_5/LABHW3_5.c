/*LABHW3_5 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void selectionSort(int list[], int size)
{
	int temp;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[i] < list[j]) 
			{
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}

	printf("���� ��:\t");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");
}
int main(void)
{
	int num;;
	int arr[SIZE];

	srand(time(NULL));

	//���� ����
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;

	//���� �迭 ���
	printf("�߻��� ����:\t");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	////�������� ���� �� ���� �迭 ���
	selectionSort(arr, SIZE);

	return 0;	
}
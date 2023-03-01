/*LABHW3_5 컴퓨터학과 3학년 20200997 이미지*/
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

	printf("정렬 후:\t");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");
}
int main(void)
{
	int num;;
	int arr[SIZE];

	srand(time(NULL));

	//난수 생성
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;

	//난수 배열 출력
	printf("발생된 난수:\t");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	////오름차순 정렬 후 난수 배열 출력
	selectionSort(arr, SIZE);

	return 0;	
}
/*컴퓨터학과 20200997 이미지*/
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

	printf("엘리먼트들은 ");
	printData(data, 10);

	average = averageData(data, 10);
	printf("엘리먼트의 평균은 %d\n", average);

	//최대값 구하기 호출
	printf("엘리먼트들 중 가장 큰 수는 %d\n", maxData(data, 10));

}

void generateData(int a0[], int size) {

	int i;

	for (i = 0; i < size; i++)
		a0[i] = rand() % 100;
}

void printData(int a2[], int size)
{
	int i;
	for (i = 0; i < size; i++) // Index 0..9까지
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
	for (i = 0; i < size; i++) { // Index 0..9까지
		if (best < a3[i])
			best = a3[i];
	}

	return best;
}
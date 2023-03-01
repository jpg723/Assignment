#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void readMatrix(int a[][3])
{
	int r, c;

	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf_s("%d", &a[r][c]);
		}
	}
}
void matrixAdd(int a[][3], int b[][3], int x[][3])
{
	int r, c;

	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			x[r][c] = a[r][c] + b[r][c];
		}
	}
}
void printMatrix(int a[][3])
{
	int r, c;

	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%3d ", a[r][c]);
		}
		printf("\n");
	}
}
int main(void)
{
	int a[3][3], b[3][3], result[3][3];


	printf("<3 x 3> 행렬 A 입력:\n");
	readMatrix(a);
	printf("<3 x 3> 행렬 B 입력:\n");
	readMatrix(b);
	printf("행렬합:\n");
	matrixAdd(a, b, result);
	printMatrix(result);
}
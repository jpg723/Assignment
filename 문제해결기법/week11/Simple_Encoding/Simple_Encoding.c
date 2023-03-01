#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void printMaxMatrix(int** arr, int r, int c)
{
	int i, j, k, max = 0;

	for (i = 0; i < r; i++)
	{
		k = 1;

		for (j = 0; j < c; j++)
		{
			k *= arr[i][j];
		}

		if (max < k)
		{
			max = k;
		}
	}
	printf("�ִ밪: %d", max);
}
void matrixAdd(int** array, int** a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == j)
				a[i][j] = array[i][j] + 1;
			else
				a[i][j] = array[i][j];
		}
	}
	printMaxMatrix(a, r, c);

}
void readMatrix(int** a, int r, int c) 
{
	int i = 0, j = 0, arr;

	for (j = 0; j < c; j++)
	{
		scanf_s("%d", &a[i][j]);
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			a[i][j] = a[0][j];
		}
	}
}
int main(void)
{
	int** array;
	int** a;
	int aRow, aCol;
	int i = 0, j = 0;
	int n;
	int arrNum = 0;

	printf("Input: ");
	scanf_s("%d", &n);

	aCol = n;
	aRow = n;

	array = (int**)malloc(sizeof(int*) * aRow);
	a = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++)         
	{
		array[i] = (int*)malloc(sizeof(int) * aCol);   
	}
	readMatrix(array, aRow, aCol);

	for (i = 0; i < aRow; i++)           
	{
		a[i] = (int*)malloc(sizeof(int) * aCol);   
	}

	matrixAdd(array, a, aRow, aCol);
	printf("\n");

	for (i = 0; i < aRow; i++)  
	{
		free(array[i]);                 
	}

	for (i = 0; i < aRow; i++)   
	{
		free(a[i]);            
	}
}
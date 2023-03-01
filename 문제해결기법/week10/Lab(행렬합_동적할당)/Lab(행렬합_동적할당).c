#include <stdio.h>
#include <stdlib.h>
void matrixAdd(int** a, int** b, int** x, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			x[i][j] = a[i][j] + b[i][j];
		}
	}

}
void printMatrix(int** a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

}
void readMatrix(int** a, int r, int c)
{
	int i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
}
int main(void)
{
	int** A, ** B;
	int** X;
	int aRow, aCol;
	int i = 0, j = 0;

	printf("Enter 행렬 A의 행과 열의 개수: ");
	scanf_s("%d %d", &aCol, &aRow);

	A = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++)           
	{
		A[i] = (int*)malloc(sizeof(int) * aCol);    
	}
	readMatrix(A, aRow, aCol);

	printf("Enter 행렬 B의 행과 열의 개수: ");
	scanf_s("%d %d", &aRow, &aCol);

	B = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++)          
	{
		B[i] = (int*)malloc(sizeof(int) * aCol);   
	}
	readMatrix(B, aRow, aCol);

	X = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++)           
	{
		X[i] = (int*)malloc(sizeof(int) * aCol);    
	}

	matrixAdd(A, B, X, aRow, aCol);
	printf("행렬합:\n");
	printMatrix(X, aRow, aCol);
	printf("\n");

	for (i = 0; i < aRow; i++)   
	{
		free(A[i]);              
	}

	for (i = 0; i < aRow; i++) 
	{
		free(B[i]);                
	}

	for (i = 0; i < aRow; i++)  
	{
		free(X[i]);              
	}

	free(A);    
	free(B);
	free(X);

	return 0;
}
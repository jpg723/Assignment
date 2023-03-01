#include <stdio.h>
#include <stdlib.h>
void matrixMul(int** a, int** c, int** x, int Arow, int Acol, int Crow, int Ccol)
{
	int i, j, k;

	for (i = 0; i < Arow; i++)
	{
		for (j = 0; j < Ccol; j++)
		{
			x[i][j] = 0;

			for (k = 0; k < Acol; k++)
			{
				x[i][j] += a[i][k] * c[k][j];
			}
		}
	}
}
void printMatrix(int** a, int row, int col)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

}
void readMatrix(int** a, int row, int col)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
}
void transposed_matrix(int** a, int row, int col)
{
	int temp;
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a[j][i];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a[i][j];
		}
	}

	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			printf("%3d ", a[j][i]);
		}
		printf("\n");
	}
}
int main(void)
{
	int** A, ** C;
	int** X;
	int aRow, aCol;
	int cRow, cCol;
	int i = 0, j = 0;

	printf("Enter 행렬 A의 행과 열의 개수: ");
	scanf_s("%d %d", &aRow, &aCol);
	printf("Enter 행렬 C의 열과 행의 개수(c의 행은 4이어야): ");
	scanf_s("%d %d", &cRow, &cCol);

	printf("%d x %d 행렬 A 입력: \n", aRow, aCol);

	A = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++)
	{
		A[i] = (int*)malloc(sizeof(int) * aCol);
	}

	readMatrix(A, aRow, aCol); 

	printf("\n%d x %d 행렬 C 입력: \n", cRow, cCol);
	
	C = (int**)malloc(sizeof(int*) * cRow);

	for (i = 0; i < cRow; i++)
	{
		C[i] = (int*)malloc(sizeof(int) * cCol);
	}

	readMatrix(C, cRow, cCol);

	X = (int**)malloc(sizeof(int*) * aRow);

	for (i = 0; i < aRow; i++)
	{
		X[i] = (int*)malloc(sizeof(int) * cCol);
	}

	matrixMul(A, C, X, aRow, aCol, cRow, cCol); 
	printf("\n행렬곱:\n");
	printMatrix(X, aRow, cCol);
	printf("\n");

	printf("전치행렬:\n");
	transposed_matrix(A, aRow, aCol);
	printf("\n");

	for (i = 0; i < aRow; i++)    
	{
		free(A[i]);                
	}

	for (i = 0; i < cRow; i++)   
	{
		free(C[i]);                 
	}

	for (i = 0; i < aRow; i++)  
	{
		free(X[i]);                  
	}

	free(A);  
	free(C);
	free(X);

	return 0;
}
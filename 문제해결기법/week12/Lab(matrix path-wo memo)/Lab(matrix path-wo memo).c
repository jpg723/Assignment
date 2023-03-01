#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int matrixPath(int** m, int i, int j) {
	if (i == 0 && j == 0)
		return m[i][j];

	else if (i == 0)
		return matrixPath(m, i, j - 1) + m[i][j];

	else if (j == 0)
		return matrixPath(m, i - 1, j) + m[i][j];

	else {
		int a, b;

		a = matrixPath(m, i, j - 1);
		b = matrixPath(m, i - 1, j);

		return ((a < b ? a : b) + m[i][j]);
	}
}

int main(void) {
	int** m;
	int r, c;
	int i, j;

	r = c = 4;

	m = (int**)malloc(sizeof(int*) * r);

	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	printf("%d\n", matrixPath(m, r - 1, c - 1));
}
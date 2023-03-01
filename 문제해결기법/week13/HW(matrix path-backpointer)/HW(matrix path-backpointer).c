#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define ST 1
#define LE 2
#define UP 3

int matrixPath(int** m, int** M1, int** M2, int** BP, int i, int j) {
	if (M2[i][j] != 0)
		return M1[i][j];

	if (i == 0 && j == 0) {
		BP[i][j] = ST;
		M1[i][j] = m[i][j];
		return m[i][j];
	}

	else if (i == 0) {

		M1[i][j] = matrixPath(m, M1, M2, BP, i, j - 1) + m[i][j];
		BP[i][j] = LE;
	}

	else if (j == 0) {
		M1[i][j] = matrixPath(m, M1, M2, BP, i - 1, j) + m[i][j];
		BP[i][j] = UP;
	}

	else {
		int a, b;

		a = matrixPath(m, M1, M2, BP, i, j - 1);
		b = matrixPath(m, M1, M2, BP, i - 1, j);

		if (a < b)
			BP[i][j] = LE;
		else
			BP[i][j] = UP;

		M1[i][j] = ((a < b) ? a : b) + m[i][j];
	}

	M2[i][j] = 1;
	return M1[i][j];
}

void print_path(int i, int j, int** BP) {
	if (BP[i][j] == UP)
		print_path(i - 1, j, BP);

	else if (BP[i][j] == LE)
		print_path(i, j - 1, BP);

	printf("<%d, %d> ", i, j);
}
int main(void) {
	int** m;
	int** M1;
	int** M2;
	int** BP;
	int r, c;
	int i, j;

	r = c = 4;

	m = (int**)malloc(sizeof(int*) * r);
	M1 = (int**)malloc(sizeof(int*) * r);
	M2 = (int**)malloc(sizeof(int*) * r);
	BP = (int**)malloc(sizeof(int*) * r);

	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		M1[i] = (int*)malloc(sizeof(int) * c);
		M2[i] = (int*)malloc(sizeof(int) * c);
		BP[i] = (int*)malloc(sizeof(int) * c);
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]);
			M1[i][j] = 0;
			M2[i][j] = 0;
		}
	}

	printf("Minimun score: %d\n\n", matrixPath(m, M1, M2, BP, r - 1, c - 1));

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", BP[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	print_path(3, 3, BP);
	printf("\n");

	free(m);
	free(M1);
	free(M2);
	free(BP);
}
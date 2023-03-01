#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define X_VALUE 5
#define Y_VALUE 5
void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;
	
	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}
void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++) {

		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] == '*') {

				if (i - 1 >= 0) { //* 바로 위
					numOfBombs[i - 1][j]++;

					if (j - 1 >= 0) //*왼쪽 위 대각선
						numOfBombs[i - 1][j - 1]++;

					if (j + 1 < Y_VALUE) //*오른쪽 위 대각선
						numOfBombs[i - 1][j + 1]++;
				}

				if (i + 1 < X_VALUE) { //*바로 아래
					numOfBombs[i + 1][j]++;

					if (j - 1 >= 0) //*왼쪽 아래 대각선
						numOfBombs[i + 1][j - 1]++;

					if (j + 1 < Y_VALUE) //*오른쪽 아래 대각선
						numOfBombs[i + 1][j + 1]++;
				}
				if (j - 1 >= 0) //*바로 왼쪽
					numOfBombs[i][j - 1]++;

				if (j + 1 < Y_VALUE) //*바로 오른쪽
					numOfBombs[i][j + 1]++;
			}
		}
	}
}
void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		}
		printf("\n");
	}
}
int main(void)
{
	char grid[X_VALUE][Y_VALUE + 1];
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 };
	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	printf("\n");
	display_numOfBombs(grid, numOfBombs);
}
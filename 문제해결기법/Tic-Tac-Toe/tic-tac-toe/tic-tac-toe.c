#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void display(char b[][3]) {

	printf("    0 1 2\n");
	printf("   --------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d |", i);
		for (int j = 0; j < 3; j++)
		{
			if (b[i][j] == 'X')
				printf(" X");
			else if (b[i][j] == 'O')
				printf(" O");
			else
				printf("  ");
		}
		printf("\n");
	}
}
int win(char b[][3]) {
	
	int X_win = 0, O_win = 0;
	int win = 0;

	for (int i = 0; i < 3; i++) {

		X_win = 0;
		O_win = 0;

		for (int j = 0; j < 3; j++) {

			if (b[i][j] == 'X')
				X_win++;

			else if (b[i][j] == 'O')
				O_win++;

			else
				continue;
		}

		if (X_win == 3) {
			printf("Player X wins!\n");
			return 1;
		}

		else if(O_win == 3) {
			printf("Player O wins!\n");
			return 1;
		}
	}

	for (int j = 0; j < 3; j++) {

		X_win = 0;
		O_win = 0;

		for (int i = 0; i < 3; i++) {

			if (b[i][j] == 'X')
				X_win++;

			else if (b[i][j] == 'O')
				O_win++;

			else
				continue;
		}

		if (X_win == 3) {
			printf("Player X wins!\n");
			return 1;
		}

		else if(O_win == 3) {
			printf("Player O wins!\n");
			return 1;
		}
	}

	X_win = 0;
	O_win = 0;
	for (int i = 0; i < 3; i++) {

		if (b[i][i] == 'X')
			X_win++;

		else if (b[i][i] == 'O')
			O_win++;

		else
			continue;

		if (X_win == 3) {
			printf("Player X wins!\n");
			return 1;
		}

		else if (O_win == 3) {
			printf("Player O wins!\n");
			return 1;
		}
	}

	X_win = 0;
	O_win = 0;
	for (int i = 0; i < 3; i++) {

		if (b[i][2 - i] == 'X')
			X_win++;

		else if (b[i][2 - i] == 'O')
			O_win++;

		else
			continue;

		if (X_win == 3) {
			printf("\nPlayer X wins!\n");
			return 1;
		}

		else if (O_win == 3) {
			printf("\nPlayer O wins!\n");
			return 1;
		}
	}

	return 0;
}

int main(void) {

	char board[3][3];
	char turn = 'X';
	int row, col;
	int count;
	int lose;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}

	count = 0;
	display(board);

	do
	{
		printf("Player %c(За ї­): ", turn);
		scanf("%d %d", &col, &row);

		if (board[col][row] == 'X' || board[col][row] == 'O')
			continue;		

		count++; 

		if (turn == 'X') {

			board[col][row] = 'X';
			turn = 'O';
		}
		else {
			board[col][row] = 'O';
			turn = 'X';
		}
		display(board);

	} while ((lose = !win(board)) && count < 9);

	if (lose && count == 9)
		printf("Nobody wins!\n");
}
/*Lab(오목 준비: 말 놓기) 컴퓨터학과 3학년 20200997 이미지*/
#include <stdio.h>
#define BOARD_SIZE 3
int winCheck(char b[][BOARD_SIZE], int r, int c)
{
    int i, j;
    int X_check = 0, O_check = 0;

    // 오목 성사 여부를 판단하는 코드
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (b[i][j] == 'X')
                X_check++;
            else
                X_check = 0;
            if (b[i][j] == 'O')
                O_check++;
            else
                O_check = 0;
            if (X_check == 5 || O_check == 5)
                return 1;
        }
    }
    return 0;
}
void display(char b[][BOARD_SIZE])
{
    int i, j;

    printf("     ");
    for (i = 0; i < BOARD_SIZE; i++)
        printf("%2d", i);
    printf("\n     ---------------------\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%3d |", i);
        for (j = 0; j < BOARD_SIZE; j++)
            printf(" %c", b[i][j]);
        printf("\n");
    }
}
void main()
{
    char board[BOARD_SIZE][BOARD_SIZE];
    char turn = 'X';
    char turn2 = 'O';
    int r, c;
    int i, j;
    int count;

    for (i = 0; i < BOARD_SIZE; i++)
        for (j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';
    count = 1;
    display(board);
    do
    {
        if (count % 2 == 1)
        {
            printf("Player %c(행 열):", turn);
            scanf_s("%d %d", &r, &c);
            if (board[r][c] == ' ')
            {
                board[r][c] = turn;
                display(board);
                count++;
            }
            if (winCheck(board, BOARD_SIZE, BOARD_SIZE) == 1)
            {
                printf("Player %c wins!\n", turn);
                break;
            }
        }
        else {
            printf("Player %c(행 열):", turn2);
            scanf_s("%d %d", &r, &c);
            if (board[r][c] == ' ')
            {
                board[r][c] = turn2;
                display(board);
                count++;
            }
            if (winCheck(board, BOARD_SIZE, BOARD_SIZE) == 1)
            {
                printf("Player %c wins!\n", turn);
                break;
            }
        }
    } while (count <= BOARD_SIZE * BOARD_SIZE);

    if (count == BOARD_SIZE * BOARD_SIZE)
        printf("Nobody win!\n");
}
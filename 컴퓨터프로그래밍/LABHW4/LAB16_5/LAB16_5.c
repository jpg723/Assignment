/*LAB16_5 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initTable(int t[][5], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            t[i][j] = rand() % 100;
            //printf("%4d", t[i][j]);
        }
        //printf("\n");
    }
}

int totalTable(int t[][5], int r)
{
    int total = 0;

    for (int i = 0; i < r; i)
    {
        for (int j = 0; j < 5; j++)
            total += t[i][j];
    }

    return total;
}

void printTable(int t[][5], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%4d", t[i][j]);
        printf("\n");
    }
}
int main(void)
{
    int table[3][5];
    int i, j;
    int total = 0;

    srand(time(NULL));

    initTable(table, 3);

    printf("�߻��� ������ ����� %d�Դϴ�\n", totalTable(table, 3) / 15);
    printTable(table, 3); // ȣ��

    return 0;
}
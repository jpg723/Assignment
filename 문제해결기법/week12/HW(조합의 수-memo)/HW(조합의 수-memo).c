#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int comb(int n, int r, int** C)
{
    printf("comb(%d,%d)\n", n, r);

    if ((n == r) || r == 0)
        return 1;

    else if (C[n][r] != 0)
        return C[n][r];

    else
    {
        C[n][r] = comb(n - 1, r - 1, C) + comb(n - 1, r, C);
        return C[n][r];
    }
}
int main(void)
{
    int** C;
    int n, r, i, j;

    scanf("%d %d", &n, &r);

    C = (int**)malloc(sizeof(int*) * 1000);

    for (i = 0; i < 1000; i++)
        C[i] = (int*)malloc(sizeof(int*) * 1000);

    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < 1000; j++)
            C[i][j] = 0;
    }

    printf("%d\n", comb(n, r, C));

    return 0;
}
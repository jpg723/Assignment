/*HW4_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
    int n, idx;

    printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
    scanf("%d", &n);

    for (idx = 0; idx < n; idx++)
    {
        printf("%d ", fibo(idx));

        if ((idx + 1) % 5 == 0)
            printf("\n");
    }
    printf("\n");
}
int fibo(int n) // 재귀적으로 구현하지 않는다
{
    int x = 0, y, f = 1;
    int i;

    if (n == 0 || n == 1)
        return 1;
    else
    {
        for (i = 1; i < n; i++)
        {
            y = f;
            f = x + f;
            x = y;
        }
        return f;
    }
}

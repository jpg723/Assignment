/*HW4_2 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
    int n, idx;

    printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
    scanf("%d", &n);

    for (idx = 0; idx < n; idx++)
    {
        printf("%d ", fibo(idx));

        if ((idx + 1) % 5 == 0)
            printf("\n");
    }
    printf("\n");
}
int fibo(int n) // ��������� �������� �ʴ´�
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

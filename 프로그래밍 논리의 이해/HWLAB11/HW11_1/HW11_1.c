/*��ǻ���а� 20200997 �̹���*/
#include <stdio.h>
int sumMToN(int m, int n); // �Լ��� ����
int main(void)
{
    printf("%d���� %d ������ ���� %d\n", 2, 5, sumMToN(2, 5));
    printf("%d���� %d ������ ���� %d\n", 3, 7, sumMToN(3, 7));
    printf("%d���� %d ������ ���� %d\n", 2, 10, sumMToN(2, 10));

    return 0;
}
int sumMToN(int m, int n) // �Լ��� ����
{
    int sum = 0;

    for (int i = m; i <= n; i++)
        sum += i;

    return sum;
}
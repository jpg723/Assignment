/*��ǻ���а� 20200997 �̹���*/
#include <stdio.h>
int sumMToN(int m, int n); // �Լ��� ����
int main(void)
{
    printf("3 ���� %d ������ ���� %d\n", 5, sumMToN(3, 5));
    printf("2 ���� %d ������ ���� %d\n", 7, sumMToN(2, 7));
    printf("5 ���� %d ������ ���� %d\n", 10, sumMToN(5, 10));
}
int sumMToN(int m, int n) // �Լ��� ����
{
    int sum = 0;

    for (int i = m; i <= n; i++)
        sum += i;

    return sum;
}
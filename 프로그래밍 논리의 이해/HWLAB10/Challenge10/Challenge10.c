/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
    //���� ����
    int num, i;

    //num �Է�
    printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����): ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        printFibo(i);
    printf("\n");
}
void printFibo(int n) // (n + 1)��° ���� ���
{
    int num1 = 1, num2 = 1, fibo = 0;

    if (n == 0 || n == 1)
        fibo = num1;

    else {

        for (int i = 0; i < n - 1; i++) {
            fibo = num1 + num2;
            num1 = num2;
            num2 = fibo;
        }
    }

    printf("%d ", fibo);

    return;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findNPrintBig(int n1, int n2); // �Լ��� ����
int main(void)
{
    int num1, num2;

    printf("Enter two umbers: ");
    scanf("%d %d", &num1, &num2);

    findNPrintBig(num1, num2);

    return 0;
}
void findNPrintBig(int n1, int n2) // �� ���� ū ���� ã�� ����Ѵ�.
{
    int big;

    if (n1 > n2)
        big = n1;

    else
        big = n2;

    printf("Big number is %d.\n", big);

    return;
}
/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void findNPrintBiggest(int a, int b, int c); // �Լ��� ����
int main(void)
{
    //���� ����
    int num1, num2, num3;

    //���� �Է�
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    findNPrintBiggest(num1, num2, num3); //��� ���

    return 0;
}
void findNPrintBiggest(int a, int b, int c) // �Լ��� ����
{
    int big = 0;

    //�ִ밪 ���ϱ�
    if (a > b) {
        if (a > c)
            big = a;

        else
            big = c;
    }

    else if (b > a) {
        if (b > c)
            big = b;

        else
            big = c;
    }

    printf("The Biggest number is %d.\n", big);

    return;
}

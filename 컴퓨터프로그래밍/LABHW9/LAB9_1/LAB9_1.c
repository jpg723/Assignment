/**********
LAB9_1 20200997 �̹��� ��ǻ���а� 3�г�
*************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    char c;

    printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");

    c = getchar();
    while (!(c == 'q'))
    {
        putchar(c);
        c = getchar();
    }
    c = '\0';
    
    while (getchar() != '\n');

    printf("\n----------------------------------------------------------\n");
    printf("Enter �ι�° ���ڿ�(q�������� ���ڿ��� ������)\n");
    c = getchar();
    while (!(c == 'q'))
    {
        putchar(c);
        c = getchar();
    }
    putchar('\n');
}
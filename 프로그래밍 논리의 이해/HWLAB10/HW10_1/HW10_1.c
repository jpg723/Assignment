/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printManyChars(char ch, int num); // �Լ��� ����
int main(void)
{
    //���� ����
    char c;
    int n;

    printf("Enter a character to print: ");
    scanf("%c", &c); //�����Է�
    printf("Enter the number of characters: ");
    scanf("%d", &n); //����� ���� �Է�

    printManyChars(c, n); //��� ���

    return 0;
}
void printManyChars(char ch, int num)
{
    for (int i = 0; i < num; i++)
        printf("%c", ch);
    printf("\n");

    return;
}

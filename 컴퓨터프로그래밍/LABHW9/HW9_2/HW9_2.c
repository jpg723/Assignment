/**********
HW9_2 20200997 �̹��� ��ǻ���а� 3�г�
*************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    char id[20], y[10], s[5];
    char* idFront;
    char* idBack;
    int year;
    int sex;

    printf("�ֹε�Ϲ�ȣ �Է�('-'����): ");
    gets(id);

    idFront = strtok(id, "-");
    idBack = strtok(NULL, "\0");

    strncpy(y, idFront, 2);
    strncpy(s, idBack, 1);

    year = atoi(y);
    sex = atoi(s);

    printf("����� %d�⵵�� �̱���.\n", year + 1900);

    if (sex == 2)
    {
        printf("���ں� �̽ñ���.\n", year + 1900);
        printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ��� �˴ϴ�.\n", year + 1984);
    }
    else
    {
        printf("���ں� �̽ñ���.\n");
        printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ��� �˴ϴ�.\n", year + 1977);
    }
}
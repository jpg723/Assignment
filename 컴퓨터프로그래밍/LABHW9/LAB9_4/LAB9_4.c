/**********
LAB9_4 20200997 �̹��� ��ǻ���а� 3�г�
*************/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
    char fullName[50];
    char lastName[50] = "Pak";
    char firstName[50] = "Suehee";
    char id[15] = "630826-2020222";
    char idFront[7];

    // fullName �� ���� ��, �� �׸��� �̸��� �ִ´�.
    strncpy(fullName, lastName, sizeof(lastName));
    strcat(fullName, ", ");
    strcat(fullName, firstName, sizeof(firstName));

    // idFront �� �ֹε�� ��ȣ�� �� 6 �ڸ��� �ִ´�.
    strncpy(idFront, id, 6);
    idFront[6] = '\0';

    printf("����� fullname�� %s\n", fullName);
    printf("�ֹε�Ϲ�ȣ ���ڸ��� %s\n", idFront);

    return 0;
}
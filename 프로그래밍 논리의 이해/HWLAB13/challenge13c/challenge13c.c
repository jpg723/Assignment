/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_STRING 81
int main(void)
{
    //���� ����
    char str[MAX_STRING];
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    int i;

    //���ڿ� �Է�
    printf("���ڿ� �Է� (���ڼ� %d ����): ", MAX_STRING);
    scanf("%s", str);

    //���� ���� ���
    for (int i = 0; str[i] != '\0'; i++) {

        //a or A
        if (str[i] == 'a' || str[i] == 'A')
            countA++;
        //e or E
        else if (str[i] == 'e' || str[i] == 'E')
            countE++;
        //i or I
        else if (str[i] == 'i' || str[i] == 'I')
            countI++;
        //o or O
        else if (str[i] == 'o' || str[i] == 'O')
            countO++;
        //u or U
        else if (str[i] == 'u' || str[i] == 'U')
            countU++;
    }

    printf("a or A: %d ��\n", countA);
    printf("e or E: %d ��\n", countE);
    printf("i or I: %d ��\n", countI);
    printf("o or O: %d ��\n", countO);
    printf("u or U: %d ��\n", countU);

    return 0;
}
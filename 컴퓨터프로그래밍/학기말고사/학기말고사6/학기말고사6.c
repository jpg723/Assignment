#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ڿ� w2 �� ���ڿ� w1 �� start ��ġ�� ������ 1 ��, �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int is_word_in_word(char w1[], int start, char w2[])
{
    int length1 = 0, length2 = 0, j = 0;

    for (int i = 0; w1[i] != '\0'; i++)
        length1++;

    for (int i = 0; w2[i] != '\0'; i++)
        length2++;

    if (length2 > length1 - start)
        return 0;

    for (int i = start; w1[i] != '\0'; i++)
    {
        if (w1[i] == w2[j])
            j++;

        else
            return 0;

        if (j == length2)
            return 1;
    }
}

int main(void) // main �� �������� ���� ����Ѵ�. ����� ����
{
    char s1[20], s2[20];
    int i, j;
    scanf("%s", s1);
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++)
        printf("%d", is_word_in_word(s1, i, s2));
}
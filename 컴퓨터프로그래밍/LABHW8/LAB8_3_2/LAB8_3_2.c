/*��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int stringEqual(const char* s1, const char* s2)
{
    // ���� ����
    int length1 = 0, length2 = 0;

    //���ڿ� ����
    for (int i = 0; s1[i] != '\0'; i++)
        length1++;

    for (int i = 0; s2[i] != '\0'; i++)
        length2++;

    //�� ���ڿ��� ���̰� �ٸ��� 1��ȯ
    if (length1 != length2)
        return 1;

    else
    {
        for (int i = 0; i < length1; i++)
        {
            if (*s1++ != *s2++)
                return 1;
        }
    }

    return 0;
}
void main()
{
    char string1[50];
    char string2[50];
    printf("Enter the first string:");
    scanf("%s", string1);
    printf("Enter the second string:");
    scanf("%s", string2);
    if (stringEqual(string1, string2) == 0)
        printf("�ΰ��� ���ڿ��� ����\n");
    else
        printf("�ΰ��� ���ڿ��� �ٸ���\n");
}
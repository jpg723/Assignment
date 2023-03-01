/*��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stringCompare(const char* s1, const char* s2)
{
    int length1 = 0, length2 = 0, length;

    //���ڿ� ����
    for (int i = 0; s1[i] != '\0'; i++)
        length1++;

    for (int i = 0; s2[i] != '\0'; i++)
        length2++;

    if (length1 >= length2)
        length = length1;

    else
        length = length2;

    for (int i = 0; i < length; i++)
    {
        if (*s1 != *s2)
        {
            if (*s1 < *s2)
                return 1;
            else
                return -1;
        }
    }

    return 0;
}
void stringCat(char* s1, const char* s2)
{
    for (int i = 0; *s1 != '\0'; i++)
        s1++;

    for (int i = 0; *s2 != '\0'; i++)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1++ = '\0';
}
void stringChange(char* s, char ch, char newCh)
{
    int size = 0;

    //���ڿ� ����
    for (int i = 0; s[i] != '\0'; i++)
        size++;

    //���� ����
    for (int i = 0; i < size; i++)
    {
        if (*s == ch)
            *s = newCh;
        s++;
    }
}
int main(void)
{
    char name1[20];
    char name2[20];
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);
    if (stringCompare(name1, name2) == 0)
        printf("�ΰ��� �̸��� ����\n");
    else if (stringCompare(name1, name2) == 1)
        printf("�ΰ��� �̸��� �ٸ��� ���ĵǾ��ִ�\n");
    else
        printf("�ΰ��� �̸��� �ٸ��� ���ĵǾ������ʴ�\n");
    stringCat(name1, name2);
    printf("The concatenated name is %s\n", name1);
    stringChange(name1, 'u', 'x');
    printf("The changed name is %s\n", name1);
}
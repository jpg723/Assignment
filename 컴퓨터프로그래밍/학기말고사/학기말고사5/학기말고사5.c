#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_word_in_word(char w1[], int start, char w2[])
{
    int length1 = 0, length2 = 0;

    for (int i = 0; w1[i] != '\0'; i++)
        length1++;

    for (int i = 0; w2[i] != '\0'; i++)
        length2++;

    if (length1 - start < length2)
    {
        printf("0");
        return 0;
    }

    for (int i = start; w2[i] != '\0'; i++)
    {
        if (w1[i] != w2[i - start])
        {
            printf("0");
            return 0;
        }
    }   

    printf("1");
}
int main(void) // main 은 변경하지 말고 사용한다. 변경시 감점
{
    char s1[20], s2[20];
    int i, j;
    scanf("%s", s1);
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++)
        printf("%d", is_word_in_word(s1, i, s2));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자열 w2 가 문자열 w1 의 start 위치에 있으면 1 을, 아니면 0 을 반환하는 함수
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

int main(void) // main 은 변경하지 말고 사용한다. 변경시 감점
{
    char s1[20], s2[20];
    int i, j;
    scanf("%s", s1);
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++)
        printf("%d", is_word_in_word(s1, i, s2));
}
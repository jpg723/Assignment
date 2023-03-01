/*컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int stringEqual(const char* s1, const char* s2)
{
    // 변수 선언
    int length1 = 0, length2 = 0;

    //문자열 길이
    for (int i = 0; s1[i] != '\0'; i++)
        length1++;

    for (int i = 0; s2[i] != '\0'; i++)
        length2++;

    //두 문자열의 길이가 다르면 1반환
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
        printf("두개의 문자열은 같다\n");
    else
        printf("두개의 문자열은 다르다\n");
}
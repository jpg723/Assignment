#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int mergeString(char c[], char a[], char b[])
{
    int index = 0;
    char temp;

    for (int i = 0; a[i] != '\0'; i++)
    {
        c[index] = a[i];
        index++;
    }


    for (int i = 0; b[i] != '\0'; i++)
    {
        c[index] = b[i];
        index++;
    }

    c[index] = '\0';

    for (int i = 0; i < index; i++)
    {
        for (int j = i; j < index; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    return c;
}
int main(void)
{
    char word1[10], word2[10];
    char mergedWord[20];
    scanf("%s", word1);
    scanf("%s", word2);
    mergeString(mergedWord, word1, word2);
    printf("%s\n", mergedWord);
}
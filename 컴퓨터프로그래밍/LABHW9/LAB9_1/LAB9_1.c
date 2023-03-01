/**********
LAB9_1 20200997 이미지 컴퓨터학과 3학년
*************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    char c;

    printf("Enter 문자열(q이전까지 문자열로 인정함)\n");

    c = getchar();
    while (!(c == 'q'))
    {
        putchar(c);
        c = getchar();
    }
    c = '\0';
    
    while (getchar() != '\n');

    printf("\n----------------------------------------------------------\n");
    printf("Enter 두번째 문자열(q이전까지 문자열로 인정함)\n");
    c = getchar();
    while (!(c == 'q'))
    {
        putchar(c);
        c = getchar();
    }
    putchar('\n');
}
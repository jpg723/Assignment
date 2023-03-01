/**********
HW9_2 20200997 이미지 컴퓨터학과 3학년
*************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    char id[20], y[10], s[5];
    char* idFront;
    char* idBack;
    int year;
    int sex;

    printf("주민등록번호 입력('-'포함): ");
    gets(id);

    idFront = strtok(id, "-");
    idBack = strtok(NULL, "\0");

    strncpy(y, idFront, 2);
    strncpy(s, idBack, 1);

    year = atoi(y);
    sex = atoi(s);

    printf("당신은 %d년도생 이군요.\n", year + 1900);

    if (sex == 2)
    {
        printf("여자분 이시군요.\n", year + 1900);
        printf("평균 수명 84을 더하면 %d까지 산다고 계산 됩니다.\n", year + 1984);
    }
    else
    {
        printf("남자분 이시군요.\n");
        printf("평균 수명 77을 더하면 %d까지 산다고 계산 됩니다.\n", year + 1977);
    }
}
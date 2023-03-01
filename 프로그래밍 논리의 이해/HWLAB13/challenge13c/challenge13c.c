/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_STRING 81
int main(void)
{
    //변수 선언
    char str[MAX_STRING];
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    int i;

    //문자열 입력
    printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
    scanf("%s", str);

    //모음 개수 계산
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

    printf("a or A: %d 개\n", countA);
    printf("e or E: %d 개\n", countE);
    printf("i or I: %d 개\n", countI);
    printf("o or O: %d 개\n", countO);
    printf("u or U: %d 개\n", countU);

    return 0;
}
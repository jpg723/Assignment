/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printManyChars(char ch, int num); // 함수의 원형
int main(void)
{
    //변수 선언
    char c;
    int n;

    printf("Enter a character to print: ");
    scanf("%c", &c); //문자입력
    printf("Enter the number of characters: ");
    scanf("%d", &n); //출력할 개수 입력

    printManyChars(c, n); //결과 출력

    return 0;
}
void printManyChars(char ch, int num)
{
    for (int i = 0; i < num; i++)
        printf("%c", ch);
    printf("\n");

    return;
}

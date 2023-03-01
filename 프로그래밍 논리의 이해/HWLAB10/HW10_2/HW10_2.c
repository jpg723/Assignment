/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void findNPrintBiggest(int a, int b, int c); // 함수의 원형
int main(void)
{
    //변수 선언
    int num1, num2, num3;

    //변수 입력
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    findNPrintBiggest(num1, num2, num3); //결과 출력

    return 0;
}
void findNPrintBiggest(int a, int b, int c) // 함수의 정의
{
    int big = 0;

    //최대값 구하기
    if (a > b) {
        if (a > c)
            big = a;

        else
            big = c;
    }

    else if (b > a) {
        if (b > c)
            big = b;

        else
            big = c;
    }

    printf("The Biggest number is %d.\n", big);

    return;
}

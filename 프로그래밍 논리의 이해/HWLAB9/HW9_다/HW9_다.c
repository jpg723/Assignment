/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cycleNb(int num);
int main(void)
{
    int n;

    //n입력
    printf("Enter a number: ");
    scanf("%d", &n);

    cycleNb(n); //결과 출력

    return 0;
} 
void cycleNb(int num)
{
    int length = 1; //길이

    printf("%d ", num); //num 시작 출력

    while (num != 1) {

        if (num % 2 == 0) //num 짝수면
            num /= 2;

        else //홀수면
            num = num * 3 + 1;

        printf("%d ", num);
        length++; //길이 증가
    }

    printf("\n길이는 %d\n", length);

    return;
}

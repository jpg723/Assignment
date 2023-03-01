/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
int main(void)
{
    //변수 선언
    int odd[SIZE], even[SIZE];
    int num;
    int i, oddIndex = 0, evenIndex = 0;

    for (i = 0; i < SIZE; i++)
    {
        //num 입력
        printf("Enter a number:");
        scanf("%d", &num);
        
        if (num % 2 == 0) { //짝수인 경우
            even[evenIndex] = num;
            evenIndex++;
        }

        else { //홀수인 경우
            odd[oddIndex] = num;
            oddIndex++;

        }
    }
    //홀수 출력
    printf("\n 홀수 출력:");
    for (i = 0; i < oddIndex; i++)
        printf("%d ", odd[i]);
    //짝수 출력
    printf("\n 짝수 출력:");
    for (i = 0; i < evenIndex; i++)
        printf("%d ", even[i]);
    printf("\n");

    return 0;
}
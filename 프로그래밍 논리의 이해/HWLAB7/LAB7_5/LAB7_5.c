/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    //변수 선언
    int num, i;
    int sum = 0, mul = 1;

    //반복횟수 입력
    printf("Enter a number:");
    scanf("%d", &num);

    i = 1;
    while (i <= num) {//num 만큼 반복
        
        sum += 3; //반복횟수만큼 더하기
        mul *= 3; //반복횟수만큼 곱하기
        i++;
    }
    
    printf("3을 %d번 더한 값은 %d 이다.\n", num, sum);
    printf("3을 %d번 곱한 값은 %d 이다.\n", num, mul);
    
    return 0;
}
/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
    //변수 선언
    int num, i;

    //num 입력
    printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수): ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        printFibo(i);
    printf("\n");
}
void printFibo(int n) // (n + 1)번째 값을 출력
{
    int num1 = 1, num2 = 1, fibo = 0;

    if (n == 0 || n == 1)
        fibo = num1;

    else {

        for (int i = 0; i < n - 1; i++) {
            fibo = num1 + num2;
            num1 = num2;
            num2 = fibo;
        }
    }

    printf("%d ", fibo);

    return;
}
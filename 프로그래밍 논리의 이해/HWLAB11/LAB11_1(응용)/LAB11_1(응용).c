/*컴퓨터학과 20200997 이미지*/
#include <stdio.h>
int sumMToN(int m, int n); // 함수의 원형
int main(void)
{
    printf("3 부터 %d 까지의 합은 %d\n", 5, sumMToN(3, 5));
    printf("2 부터 %d 까지의 합은 %d\n", 7, sumMToN(2, 7));
    printf("5 부터 %d 까지의 합은 %d\n", 10, sumMToN(5, 10));
}
int sumMToN(int m, int n) // 함수의 정의
{
    int sum = 0;

    for (int i = m; i <= n; i++)
        sum += i;

    return sum;
}
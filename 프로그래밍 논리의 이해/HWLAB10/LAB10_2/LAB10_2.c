/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findNPrintBig(int n1, int n2); // 함수의 원형
int main(void)
{
    int num1, num2;

    printf("Enter two umbers: ");
    scanf("%d %d", &num1, &num2);

    findNPrintBig(num1, num2);

    return 0;
}
void findNPrintBig(int n1, int n2) // 두 수중 큰 수를 찾아 출력한다.
{
    int big;

    if (n1 > n2)
        big = n1;

    else
        big = n2;

    printf("Big number is %d.\n", big);

    return;
}
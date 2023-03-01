/*컴퓨터학과 20200997 이미지*/
#include <stdio.h>
int square2(int x);
int main(void)
{
    int result;
    result = square2(5);
    printf("제곱은 %d\n", result);
}
int square2(int x)
{
    return x * x;
}
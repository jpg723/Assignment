/*컴퓨터학과 20200997 이미지*/
#include <stdio.h>
int square1(void); int main(void)
{
    int result;

    result = square1();

    printf("제곱은 %d\n", result);

    return 0;
}
int square1(void)
{
    int x = 5;
    
    return x * x;
}
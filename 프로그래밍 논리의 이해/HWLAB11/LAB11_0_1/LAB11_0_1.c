/*��ǻ���а� 20200997 �̹���*/
#include <stdio.h>
int square1(void); int main(void)
{
    int result;

    result = square1();

    printf("������ %d\n", result);

    return 0;
}
int square1(void)
{
    int x = 5;
    
    return x * x;
}
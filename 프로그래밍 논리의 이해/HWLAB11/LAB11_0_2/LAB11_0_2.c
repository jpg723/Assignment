/*��ǻ���а� 20200997 �̹���*/
#include <stdio.h>
int square2(int x);
int main(void)
{
    int result;
    result = square2(5);
    printf("������ %d\n", result);
}
int square2(int x)
{
    return x * x;
}
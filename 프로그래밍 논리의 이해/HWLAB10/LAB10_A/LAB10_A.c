/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
void print5Stars(void); // 함수의 원형
int main(void)
{
    print5Stars();
    // 함수의 호출부분 추가
    print5Stars();
    print5Stars();

    return 0;
}
void print5Stars(void) // 함수의 정의
{
    int i, num = 5;

    for (i = 0; i < num; i++)
        printf("*");
    printf("\n");

    return;
}